class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        for(int i=0; i<n; i++){
            if(__builtin_popcount(i) == k) count += nums[i];
        }
        return count;
    }
};