class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> res;
        int mask = 1<<n;
        for(int i=0; i<mask; i++)
            res.push_back(i^(i>>1));
        return res;
    }
};