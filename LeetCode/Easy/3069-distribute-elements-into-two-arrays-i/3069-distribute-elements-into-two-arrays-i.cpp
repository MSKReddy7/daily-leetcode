class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> res1;
        vector<int> res2;

        res1.push_back(nums[0]);    
        res2.push_back(nums[1]);
        for(int i=2; i<nums.size(); i++){
            if(res1.back() > res2.back()) res1.push_back(nums[i]);
            else res2.push_back(nums[i]);
        } 
        for(auto i: res2)
            res1.push_back(i);
        return res1;
    }
};