class Solution {
public:
    int countDigits(int num) {
        int cnt = 0;
        int digits = num;
        while(digits){
            cnt += num%(digits%10) == 0;
            digits/=10;
        }
        return cnt;
    }
};