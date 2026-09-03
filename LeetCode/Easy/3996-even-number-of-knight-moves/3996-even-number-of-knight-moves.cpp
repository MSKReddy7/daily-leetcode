class Solution {
public:
    bool canReach(vector<int>& s, vector<int>& t) {
        if((s[0]+s[1])%2 != ((t[0]+t[1])%2)) return false;
        // if(abs(s[0]-t[0])%2==0 && abs(s[1]-t[1])%2==0) return true;
        return true;
    }
};