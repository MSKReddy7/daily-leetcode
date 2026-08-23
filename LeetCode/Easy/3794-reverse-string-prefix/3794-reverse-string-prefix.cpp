class Solution {
public:
    string reversePrefix(string s, int k) {
        string res = "";
        for(int i=0; i<k; i++){
            res = s[i]+res;
        }
        for(; k<s.size(); k++){
            res += s[k];
        }
        return res;
    }
};