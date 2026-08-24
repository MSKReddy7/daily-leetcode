class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]&1) nums[i]*=-1; 
        }
        sort(nums.rbegin(),nums.rend());
        for(int i=0; i<n; i++){
            if(nums[i]&1) nums[i]*=-1; 
        }
        return nums;
    }
};