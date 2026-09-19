class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int count = 0;

        for(int i=max(1,n-k); i<=n+k; i++){
           count += n&i ? 0 : i;
        }

        return count;
    }
};