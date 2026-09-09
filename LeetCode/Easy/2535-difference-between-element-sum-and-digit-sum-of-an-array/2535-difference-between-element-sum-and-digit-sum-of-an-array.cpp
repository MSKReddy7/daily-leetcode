int getSum(int n){
    if(!n) return 0;
    return n%10 + getSum(n/10);
}

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eSum = 0;
        int dSum = 0;
        for(auto i: nums){
            eSum += i;
            dSum += getSum(i);
        }
        return abs(eSum - dSum);
    }
};