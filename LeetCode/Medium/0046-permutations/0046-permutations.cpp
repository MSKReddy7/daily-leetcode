void genPerms(vector<int>& nums,int n,vector<int>& arr, vector<vector<int>>& res, vector<bool>& selected){
    if(arr.size() == n){
        res.push_back(arr);
        return;
    }
    for(int i=0; i<n; i++){
        if(!selected[i]){
            selected[i] = 1;
            arr.push_back(nums[i]);
            genPerms(nums,n,arr,res,selected);
            selected[i] = 0;
            arr.pop_back();
        }
    }
}

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        vector<int> arr;
        vector<bool> selected(n);
        genPerms(nums,n,arr,res,selected);
        return res;
    }
};