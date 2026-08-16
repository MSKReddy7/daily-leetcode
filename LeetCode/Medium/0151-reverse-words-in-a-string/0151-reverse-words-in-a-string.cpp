class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        
        int n = s.length();

        int i =0;
        int j = n-1;
        
        while(s[j] == ' ') j--;
        
        while(i<=j){
            while(i <= j && s[i] == ' ') i++;
            int k = i+1;
            while(k<=j && s[k] != ' ') k++;
            res = s.substr(i,k-i) + (res.length() ? " " : "") + res;
            i = k;
        }
        
        return res;
    }
};