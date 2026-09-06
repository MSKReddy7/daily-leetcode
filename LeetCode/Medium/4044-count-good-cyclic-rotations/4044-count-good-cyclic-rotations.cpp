class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();
        int res = 0;

        long long leftSum = 0;
        long long rightSum = 0;
        long long halfSize = n/2;
        for(long long i=0; i<halfSize; i++){
            leftSum += nums[i];
            rightSum += nums[n-i-1];
        }
        res += (leftSum > rightSum);
        
        for(long long i=0; i<n-1; i++){
            leftSum += nums[(halfSize+i)%n]-nums[i];
            rightSum += nums[i]-nums[(halfSize+i)%n];
            res += (leftSum > rightSum);
        }
        
        return res;
    }
};