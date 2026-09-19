class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        long long seen = 0;
        int res = 0;
        
        for(auto i: nums){
            if(seen>>i & 1) res  ^= i;
            seen |= 1ll<<i;
        }
        
        return res;
    }
};