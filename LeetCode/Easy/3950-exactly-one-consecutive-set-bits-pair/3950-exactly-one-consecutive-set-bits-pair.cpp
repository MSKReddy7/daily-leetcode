class Solution {
public:
    bool consecutiveSetBits(int n) {
        int count = 0;
        while(n){
            count += (n&3)==3;
            n >>= 1;
        }
        return count == 1;
    }
};