class Solution {
public:
    int countMonobit(int n) {
        int count = 1;

        for(int i=1; i<=n; count++)
            i = i<<1 | 1;
    
        return count;
    }
};