class Solution {
public:
    int scoreOfString(string s) {
        int res = 0;

        for(int i=0; i<s.length()-1; i++){
            int diff = s[i] - s[i+1];
            res += diff<0 ? -diff : diff;
        }
        return res;
    }
};