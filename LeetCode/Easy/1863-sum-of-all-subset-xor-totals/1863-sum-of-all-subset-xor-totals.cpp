class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int sum = 0;

        for(int take = 0; take < 1<<nums.size(); take++){
            int res = 0;
            for(int i=0; i<nums.size(); i++){
                res ^= take>>i & 1 ?  nums[i] : 0;
            }
            sum += res;
        }
        return sum;
    }
};