int getGPD(int n){
    for(int i=2; i*i<=n; i++)
        if(n%i == 0) return n/i;
    return 1;
}

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;
        int count = 0;
        int i = n-2;
        while(i>=0){
            if(nums[i]<=nums[i+1]){
                i--;
                continue;
            }
            nums[i]/=getGPD(nums[i]);
            if(nums[i]>nums[i+1]) return -1;
            count++;
            i--;
        }
        return count;
    }
};