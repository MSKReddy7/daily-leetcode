class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
        long long res = 0;

        while(i<j)
            res += nums[i++]* pow(10,(int)(log10(nums[j])+1)) + nums[j--];

        if(i==j) res += nums[i];

        return res;
    }
};