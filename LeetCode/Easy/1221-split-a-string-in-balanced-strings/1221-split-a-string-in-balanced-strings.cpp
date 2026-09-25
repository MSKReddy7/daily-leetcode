class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.length();
        int count = 0;
        int cnt = 0;
        for(int i=0; i<n; i++){
            cnt += s[i]=='L' ? 1 : -1;
            count += !cnt;
        }
        return count;
    }
};