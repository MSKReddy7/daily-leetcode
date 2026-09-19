class Solution {
public:
    int minOperations(vector<int>& nums) {
        for(int i=nums.size()-1; i>0; i--){
            if(nums[i] != nums[i-1]) return 1;
        } 
        return 0;
    }
};