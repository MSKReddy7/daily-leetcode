class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> res;

        for(auto i : ransomNote)
            res[i]++;
        
        for(auto i: magazine)
            if(res.contains(i)) res[i]--;
        
        for(auto i: res)
            if(i.second>0) return 0;
        
        return 1;
    }
};