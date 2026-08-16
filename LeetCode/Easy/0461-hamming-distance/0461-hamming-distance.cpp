class Solution {
public:
    int hammingDistance(int x, int y) {
        int c = 0;
        x ^= y;
        for(int i=0; i<32; i++)
            c += x>>i & 1;
        return c;
    }
};