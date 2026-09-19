class Solution {
public:
    char repeatedCharacter(string s) {
        bitset<26> seen;
        for(auto i: s){
            if(seen.test(i-'a')) return i;
            seen.set(i-'a');
        }
        return 0;
    }
};