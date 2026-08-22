class Solution {
public:
    int distributeCandies(vector<int>& c) {
        int n = c.size();
        set<int> s;
        for(auto i: c)
            s.insert(i);
        
        if(s.size()>n/2) return n/2;
        return s.size();
    }
};