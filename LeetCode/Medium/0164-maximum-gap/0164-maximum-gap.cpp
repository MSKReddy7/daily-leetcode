class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;
        sort(nums.begin(),nums.end());
        int max = abs(nums[0] - nums[1]);
        if(n==2) return max;

        for(int i=1; i<=n-1; i++){
            int diff = abs(nums[i] - nums[i-1]);
            if(max<diff) max = diff;
        }
        return max;
    }
};