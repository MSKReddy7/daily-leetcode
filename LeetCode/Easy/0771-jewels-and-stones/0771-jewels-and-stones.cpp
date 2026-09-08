class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> m;
        for(auto i: jewels) m[i] = 0;
        for(auto i: stones) 
            if(m.contains(i)) m[i]++;
        int count = 0;
        for(auto it: m) 
            count += it.second;
        return count;
    }
};