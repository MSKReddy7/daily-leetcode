class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());

        long long cnt = 0;
        for(int i=0; i<n; i++){
            int idx = i;
            int j = i+1;
            int k = n-1;
            while(j<=k){
                int mid = j + (k-j)/2;
                if(nums[mid][0] <= nums[i][1]){
                    idx = mid;
                    j = mid+1;
                }
                else k = mid-1;
            }
            cnt += idx-i;
        }
        return cnt;
    }
};