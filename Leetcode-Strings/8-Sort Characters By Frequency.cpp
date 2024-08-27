class Solution
{
public:
    string frequencySort(string s)
    {
        unordered_map<char, int> mpp;
        for (int i = 0; i < s.size(); i++)
        {
            mpp[s[i]]++;
        }
        vector<pair<int, char>> freqVec;
        for (auto &it : mpp)
        {
            freqVec.push_back({it.second, it.first});
        }
        sort(freqVec.begin(), freqVec.end(), greater<pair<int, char>>());
        string result;
        for (auto &it : freqVec)
        {
            result.append(it.first, it.second);
        }
        return result;
    }
};