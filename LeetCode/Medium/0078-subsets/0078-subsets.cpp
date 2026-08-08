class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = 1<<nums.size();
        
        vector<vector<int>> res(n);

        int take = 0;

        for(int take = 0; take < n; take++) 
            for(int i=0; i<nums.size(); i++)
                if((take>>i) & 1)  res[take].push_back(nums[i]);
    
        return res;
    }
};