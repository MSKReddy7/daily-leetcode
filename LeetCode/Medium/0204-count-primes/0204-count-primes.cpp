class Solution {
public:
    int countPrimes(int n) {
        if(n<=1) return 0;

        vector<int>box(n,1);

        box[0] = 0; box[1] = 0;

        for(int i = 2; i*i<n; i++)
            if(box[i])
                for(int j=i*i; j < n; j+=i)
                    box[j] = 0;
       
        int cnt = 0;
        for(int i=0; i<n; i++)
            cnt += box[i];

        return cnt;
    }
};