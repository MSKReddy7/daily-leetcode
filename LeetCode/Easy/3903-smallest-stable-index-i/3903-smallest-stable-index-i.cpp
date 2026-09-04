class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int idx = -1;
        for(int i=0; i<n; i++){
            int mx = nums[i];
            int mn = nums[i];
            for(int j=0; j<i; j++) mx = max(mx,nums[j]);
            for(int j=i+1; j<n; j++) mn = min(mn,nums[j]);
            if(mx-mn <= k){
                if(idx == -1) idx = i;
                else idx = min(idx,i);
            }
        }
        return idx;
    }
};