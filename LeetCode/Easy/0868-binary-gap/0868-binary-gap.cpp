class Solution {
public:
    int binaryGap(int n) {
        int mx = 0;
        
        while(n && (n&1) == 0) n>>=1;
        if(n==1) return 0;

        while(n){
            int dist = 1;
            while(n && ((n&1) == 0)){
                dist+=1;
                n >>= 1;
            }
            mx = max(dist,mx);
            n >>= 1;
        }
        return mx;
    }
};