class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long res = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                if(i !=j){
                    long long cres = 1LL * nums[i]*nums[j] / pow(gcd(nums[i],nums[j]),2);
                    if(cres > res){
                        res = cres;
                    }
                }
            }
        }
        return res;
    }
};