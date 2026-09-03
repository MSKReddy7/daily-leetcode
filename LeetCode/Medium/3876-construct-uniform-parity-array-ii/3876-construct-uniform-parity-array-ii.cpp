class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int n = nums.size();
        int minOddIdx = -1;
        int mn = INT_MAX;
        for(int i=0; i<n; i++){
            if(minOddIdx == -1){
                if(nums[i]&1) minOddIdx = i;
            }
            else if(nums[i]&1){
                if(nums[minOddIdx] > nums[i])
                    minOddIdx = i;
            }
            mn = min(mn,nums[i]);
        }
        if(minOddIdx == -1) return true;
        if(nums[minOddIdx] != mn) return false;
        return true;
    }
};