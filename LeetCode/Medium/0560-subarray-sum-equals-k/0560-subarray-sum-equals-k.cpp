class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        
        vector<int> prefix(n);
        
        unordered_map<int,int> mp;
        mp[0] = 1;
        
        int cnt = 0;

        for(int i=0; i<n; i++){
            prefix[i] = ( i ? prefix[i-1] : 0) + nums[i];
            cnt += mp[prefix[i] - k];
            mp[prefix[i]]++;
        }
        
        return cnt;
    }
};