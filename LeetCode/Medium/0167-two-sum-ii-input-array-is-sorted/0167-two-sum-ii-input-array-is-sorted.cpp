class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int i=0;
        int j=nums.size()-1;
        while((nums[i]+nums[j]) != t){
            if(nums[i]+nums[j] < t) i++;
            else j--;
            cout << i << ' ' << j << endl;
        }

        return {i+1,j+1};
    }
};