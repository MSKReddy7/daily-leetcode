class Solution {
public:
    bool isPowerOfTwo(int n) {
        int got = 0;

        if(n<=0) return got;
        
        for(int i=0; i<32; i++){
            got += n & (1<<i) ? 1 : 0;
            if(got>1) return !got;
        }
        
        return got;
    }
};