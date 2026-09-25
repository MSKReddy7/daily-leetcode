class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp = {{0, 1}};
        int cnt = 0;

        int sum = 0;
        for(auto i: nums){
            sum += i;
            cnt += mp[sum - k];
            mp[sum]++;
        }
        
        return cnt;
    }
};