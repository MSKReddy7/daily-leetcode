int divs(int n){
    int count = 2;
    for(int i=2; i<n; i++){
        if(n%i == 0) count++;
        if(count >3) break;
    }
    return count;
}

class Solution {
public:
    bool isThree(int n) {
        if(n<=3) return 0;
        return divs(n) == 3;
    }
};