class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.length();
        int maxlen = 0;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                unordered_map<char,int> m;
                for(int k=i; k<=j; k++) m[s[k]]++;
    
                int valid = 1;
                for (auto it : m) {
                    if (it.second > 2) {
                        valid = 0;
                        break;
                    }
                }

                if(valid) maxlen = max(maxlen, j-i+1);
            }
        }
        return maxlen;
    }
};