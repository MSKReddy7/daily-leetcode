class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x = 0;
        for(int i=0; i<nums.size(); i++) 
            x ^= nums[i];

        int bitpos = 0;
        int i = 0;
        while(!bitpos)
            bitpos |= x>>i & 1 ? 1<<i : 0,i++;

        int a=0,b=0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]&bitpos) a ^= nums[i];
            else b ^= nums[i];
        }

        return {a,b};
    }
};