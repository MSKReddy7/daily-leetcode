class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int res = 0;
        for(auto i: nums)
            res |= i&1 ? 0 : i;
        return res;
    }
};