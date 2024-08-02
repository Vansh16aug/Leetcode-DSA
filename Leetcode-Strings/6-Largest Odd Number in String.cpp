class Solution {
public:
    string largestOddNumber(string num) {
        // Traverse the string from the end
        for (int i = num.size() - 1; i >= 0; --i) {
            // If the current character is an odd digit
            if ((num[i] - '0') % 2 != 0) {
                // Return the substring from the start to the current position
                return num.substr(0, i + 1);
            }
        }
        // If no odd digit is found, return an empty string
        return "";
    }
};
