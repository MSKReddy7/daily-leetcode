class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char, int> mp;
        int i=0;
        int j=0;
        int mx = 0;
        while(j<n){
            mp[s[j]]++;
            while(j-i+1 != mp.size()){
                mp[s[i]]--;
                if(!mp[s[i]]) mp.erase(s[i]);
                i++;
            }
            mx = max(j-i+1,mx);
            j++;
        }
        return mx;
    }
};