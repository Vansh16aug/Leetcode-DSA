class Solution {
public:
    string getMappedStr(string& numStr, vector<int>& mapping) {
        string mappedStr = "";
        for (int i = 0; i < numStr.length(); i++) {
            int ch = numStr[i];
            int validCh = ch - '0';
            mappedStr+=to_string(mapping[validCh]);
        }
        return mappedStr;
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>> vec;
        for (int i = 0; i < n; i++) {
            string numStr = to_string(nums[i]);

            string mappedStr = getMappedStr(numStr, mapping);

            int mappedNum = stoi(mappedStr);

            vec.push_back({mappedNum, i});
        }
        sort(vec.begin(), vec.end());
        vector<int> result;
        for (auto it : vec) {
            result.push_back(nums[it.second]);
        }
        return result;
    }
};