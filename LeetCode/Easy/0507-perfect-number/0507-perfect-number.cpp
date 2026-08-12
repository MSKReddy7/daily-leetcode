class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==1) return 0;
        int sum = 1;

        for(int i=2; i*i<=num; i++){
            cout << i;
            if(num%i == 0){
                sum+=i;
                if (i != num/i)
                    sum += num/i;
            } 
        }
        return sum==num;
    }
};