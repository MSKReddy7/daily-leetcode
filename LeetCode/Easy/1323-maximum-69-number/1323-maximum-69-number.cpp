class Solution {
public:
    int maximum69Number (int num) {
        int res = 0;
        int changed = 0;
        for(int i=pow(10,(int)(log10(num)+1)); i; i/=10){
            if(!changed && num/i==6){
                changed = 1;
                res = res*10 + 9;
            }
            else
                res = res*10 + num/i;
            
            num%=i;
        } 
        return res;
    }
};