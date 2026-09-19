class Solution {
public:
    int minimumFlips(int n) {
        int count = 0;
        int i = 0;
        int j = log2(n);

        while(i<j){
            int lb = n>>i & 1;
            int rb = n>>j & 1;
            count += lb^rb;
            i++;j--;
        }
        return count*2;
    }
};