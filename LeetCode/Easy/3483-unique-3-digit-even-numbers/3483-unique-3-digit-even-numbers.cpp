void gen(vector<int>& nums, int n, unordered_set<int>& picked, set<vector<int>>& res, vector<int>& temp){
    if(temp.size() == 3){
        if(temp[2]%2) return;
        res.insert(temp);
        return; 
    }

    for(int i=0; i<n; i++){
        if(picked.contains(i) || (!temp.size() && !nums[i])) 
            continue;
        picked.insert(i);
        temp.push_back(nums[i]);
        gen(nums, n, picked, res, temp);
        picked.erase(i);
        temp.pop_back();
    }
}

class Solution {
public:
    int totalNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> picked(3);
        set<vector<int>> res;
        vector<int> temp;
        gen(nums, n, picked, res, temp);
        return res.size();
    }
};