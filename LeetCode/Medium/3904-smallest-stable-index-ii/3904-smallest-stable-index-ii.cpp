class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int prefix[n];
        int suffix[n];
        int mx = INT_MIN;
        int mn = INT_MAX;
        for (int i = 0; i < n; i++) {
            mx = max(mx, nums[i]);
            mn = min(mn, nums[n - i - 1]);
            prefix[i] = mx;
            suffix[i] = mn;
        }
        for (int i = 0; i < n; i++) {
            if (prefix[i] - suffix[n - i - 1] <= k)
                return i;
        }
        return -1;
    }
};