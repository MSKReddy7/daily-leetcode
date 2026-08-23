class Solution {
public:
    int findClosest(int x, int y, int z) {
        return ((abs(z-x) <= abs(z-y)) ? (abs(z-x) < abs(z-y) ? 1 : 0) : 2);
    }
};