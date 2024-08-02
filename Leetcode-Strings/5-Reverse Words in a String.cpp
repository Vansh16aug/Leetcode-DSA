class Solution {
public:
    string reverseWords(string s) {
        vector<string> arr;
        stringstream ss(s);
        string word;
        // "hello world" to {"hello","world"}
        while (ss >> word) {
            arr.push_back(word);
        }
        reverse(arr.begin(), arr.end()); // {"world", "hello"}
        string ans;
        for (int i = 0; i < arr.size(); i++) {
            ans += (arr[i]);
            // if not the last element then give space after every word
            if (i != arr.size() - 1) {
                ans += " ";
            }
        }
        return ans;
    }
};