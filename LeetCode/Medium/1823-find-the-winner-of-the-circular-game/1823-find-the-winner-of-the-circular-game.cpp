class Solution {
public:
    int findTheWinner(int n, int k) {
        int i=0;
        vector<int> nums(n);

        for(int i=1; i<=n; i++) nums[i-1] = i;

        while(nums.size()>1){
            i= (i+k-1)%n;
            nums.erase(nums.begin() + i);
            n--;
        }

        return nums[0];
    }
};