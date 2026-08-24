class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int i=0;
        int j=nums.size()-1;
        int sum = nums[i]+nums[j];

        while(sum != t){
            if(nums[i]+nums[j] < t) i++;
            else j--;
            sum = nums[i]+nums[j];
        }

        return {i+1,j+1};
    }
};