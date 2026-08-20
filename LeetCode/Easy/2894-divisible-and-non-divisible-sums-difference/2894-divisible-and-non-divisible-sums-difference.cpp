class Solution {
public:
    int differenceOfSums(int n, int m) {
        int totSum = n*(n+1)/2;
        int divsSum = 0;
        for(int i=m; i<=n; i+=m) divsSum+=i;
        return totSum - 2*(divsSum);
    }
};