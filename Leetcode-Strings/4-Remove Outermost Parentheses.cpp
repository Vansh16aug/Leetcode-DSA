// Without stack
class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        string result;
        int balance = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                // not the outermost
                if (balance > 0) {
                    result += s[i];
                }
                balance++;
            }
            else{
                // if ')'
                balance--;
                if(balance>0){
                    result+=s[i];
                }
            }
        }
        return result;
    }
};

// with stack


class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        stack<char> stack;
        int start = 0;  // Start index of a primitive block
        int n = s.size();
        for(int i = 0; i <n; i++){
            if(s[i] == '(') {
                stack.push('(');
            }else{
                stack.pop();
            }
            // When the stack is empty, we found a complete primitive block
            if(stack.empty()){
                // Append all except the outermost parentheses
                result += s.substr(start + 1, i - start - 1);
                start = i + 1;  // Update the start for the next primitive block
            }
        }

        return result;
    }
};