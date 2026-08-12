int check(int n){
    if(n<=1) return 0;
    if(n<=3) return 1;

    for(int i=2; i*i<=n; i++)
        if(n%i==0)
            return 0;
    
    return 1;
}

class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int max = 0;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums[i].size(); j++){
                if(i==j){
                    if(check(nums[i][j]) && max<nums[i][j]) max = nums[i][j];
                    if(check(nums[i][nums.size()-i-1]) && max<nums[i][nums.size()-i-1])
                        max = nums[i][nums.size()-i-1];
                } 
            }
        }
        return max;
    }
};