class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> res;
        unordered_map<int,int> m;
        for(auto i: nums) m[i]++;
        for(auto i: m) if(i.second > 1) res.push_back(i.first);
        return res;
    }
};