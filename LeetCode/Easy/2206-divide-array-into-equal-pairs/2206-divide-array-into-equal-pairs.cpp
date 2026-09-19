class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i: nums)
            mp[i] ^= 1;

        for(auto it: mp)
            if(it.second) return false;
        return true;
    }
};