class Solution {
public:
    int pivotInteger(int n) {
        int x = n;
        while(x &&  (x*(x+1)/2 != n*(n+1)/2 - (x-1)*(x)/2))
            x--;
        return x ? x : -1;
    }
};