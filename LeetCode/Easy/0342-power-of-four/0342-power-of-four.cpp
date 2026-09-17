class Solution {
public:
    bool isPowerOfFour(int n) {
        if( n<0 || (n & n-1)) return false;
        while(n>1) n/=4;
        return n==1;
    }
};