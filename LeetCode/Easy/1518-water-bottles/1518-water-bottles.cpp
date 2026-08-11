class Solution {
public:
    int numWaterBottles(int n, int e) {
        int drinked = n;
        int empty = n;
        while(empty>=e){
            drinked += empty/e;
            empty = empty/e + empty%e;
        }
        return drinked;
    }
};