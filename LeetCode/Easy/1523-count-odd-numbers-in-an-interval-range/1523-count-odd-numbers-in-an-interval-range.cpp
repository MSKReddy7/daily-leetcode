class Solution {
public:
    int countOdds(int low, int high) {
        int c=0;
        if((low&1) == 0) low++;
        for(; low<=high; low+=2)
            if(low&1) c++;
        return c;
    }
};