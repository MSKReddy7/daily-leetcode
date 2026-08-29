bool isPrime(int n){
    if(n<=1) return false;
    if(n<=3) return true;

    for(int i=2; i<n; i++)
        if(n%i == 0) return false;

    return true;
}

class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        while(!isPrime(nums[left])) left++;
        while(!isPrime(nums[right])) right--;

        return right-left;

    }
};