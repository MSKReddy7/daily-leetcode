class Solution {
public:
    bool checkDivisibility(int n) {
        int a = n;
        int sum = 0;
        int pro = 1;
        while(n){
            sum += n%10;
            pro *= n%10;
            n /= 10;
        }
        return a%(sum+pro) == 0;
    }
};