class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==1) return 0;
        int sum = 1;

        for(int i=2; i*i<=num; i++){
            cout << i;
            if(num%i == 0) sum+=i;
            if(num%(num/i) == 0) sum+=num/i;
        }
        return sum==num;
    }
};