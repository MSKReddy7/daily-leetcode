void gen(vector<int>& nums,int idx, vector<vector<int>>& res, int n, vector<int>& temp){
    res.push_back(temp);
    
    if(idx == n) return;

    int prev = -11;
    for(int i=idx; i<n; i++){
        if(prev == nums[i]) continue;
        temp.push_back(nums[i]);
        gen(nums,i+1,res,n,temp);
        temp.pop_back();
        prev = nums[i];
    }
}

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int n = nums.size();
        vector<vector<int>> res;
        vector<int> temp;

        gen(nums, 0, res, n, temp);
        
        return res;
    }
};