class Solution {
public:
    int elevatorRequests(int n, vector<int>& r) {
        int res = r[0];

        for(int i = 1; i<r.size(); i++)
            res += abs(r[i] - r[i-1]);

        return res;
    }
};