class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int n = str.size();
        if(n==1) return str[0];
        sort(str.begin(),str.end());
        string str1 = str[0];
        string str2 = str[n-1];
        string s = "";
        for(int i=0;i<min(str1.size(),str2.size());i++){
            if(str1[i] == str2[i]){
                s+=str1[i];
            }
            else{
                return s;
            }
        }
        return s;
    }
};