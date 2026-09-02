void gen(vector<int>& nums,int idx, vector<vector<int>>& res, int n, vector<int>& sub){
    if(idx == n){
        res.push_back(sub);
        return;
    }
    sub.push_back(nums[idx]);
    gen(nums, idx+1, res, n, sub);
    sub.pop_back();
    gen(nums, idx+1, res, n, sub);
}

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> sub;

        gen(nums, 0, res, nums.size(), sub);
        
        return res;
    }
};