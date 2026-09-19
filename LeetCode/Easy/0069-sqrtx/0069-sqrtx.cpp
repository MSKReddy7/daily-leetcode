class Solution {
public:
    int mySqrt(int x) {
        if(x==1) return x;
        int l = 1;
        int r = x/2;

        for(; l<=r; ){
            long long mid = l+(r-l)/2;
            if(mid*mid == x) return mid;
            else if(mid*mid > x) r = mid-1;
            else l = mid+1;
        }
        
        return r;
    }
};