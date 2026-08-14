class Solution {
public:
    int rangeBitwiseAnd(int a, int b) {
        int i = 0;
        while(a != b){
            a >>=1;
            b>>=1;
            i+=1;
        }
        return a<<i;
    }
};