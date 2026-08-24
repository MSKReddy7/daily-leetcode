class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k %= n;
        k = n-k;
        vector<int> temp;
        for(int i=0; i<n; i++){
            int idx = (i+k)%n;
            temp.push_back(nums[idx]);
        }
        for(int i=0; i<n; i++)
            nums[i] = temp[i];
    }
};