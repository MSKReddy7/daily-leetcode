class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int>res(n);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i!=j && nums[j]<nums[i]) res[i]++;
            }
        }
        return res;
    }
};