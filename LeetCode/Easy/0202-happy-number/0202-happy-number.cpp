int sum(int n){
    if(!n) return 0;
    return (n%10)*(n%10) + sum(n/10);
}


class Solution {
public:
    bool isHappy(int n) {
        int slow = sum(n);
        int fast = sum(sum(n));
        while(fast != slow){
            slow = sum(slow);
            fast = sum(sum(fast));
        }
        return slow == 1;
    }
};