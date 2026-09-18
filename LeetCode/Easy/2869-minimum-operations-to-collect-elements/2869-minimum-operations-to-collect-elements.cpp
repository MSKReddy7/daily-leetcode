class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        
        int sum = k*(k+1)/2;
        unordered_set<int> seen;
        int i=n-1;
        while(i>=0 && sum){
            if(nums[i] <= k){
                if(seen.contains(nums[i])){
                    i--;
                    continue;
                } 
                sum-=nums[i];
                seen.insert(nums[i]);
            }
            i--;
        }
        return n-(i+1);
    }
};