class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> seen;
        for(auto i: s){
            if(seen.contains(i)) return i;
            seen.insert(i);
        }
        return 0;
    }
};