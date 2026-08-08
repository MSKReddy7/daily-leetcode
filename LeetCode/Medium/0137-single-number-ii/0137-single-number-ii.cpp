class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();

        int arr[32] = {0};

        for(int i=0; i<n; i++)
            for(int j=0; j<32;j++)
                if(nums[i]>>j & 1) arr[j]++;
            
        int res = 0;

        for(int i=0; i<32; i++)
            if(arr[i]%3) res |= 1<<i;

        return res;
    }
};