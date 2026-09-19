class Solution {
public:
    bool divideArray(vector<int>& nums) {
        bitset<501> parity = 0;
        for(auto i: nums) parity.flip(i);
        return parity.none();
    }
};