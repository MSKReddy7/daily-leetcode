class Solution {
public:
    long long climbStairs(int n, long long t1=1, long long t2=1) {
        if(!n) return t1;
        return climbStairs(n-1,t2,t1+t2);
    }
};