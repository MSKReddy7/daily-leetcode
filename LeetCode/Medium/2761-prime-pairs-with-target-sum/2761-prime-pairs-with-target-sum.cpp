class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<bool> sieve(n+1,true);
        sieve[0] = sieve[1] = false;

        for(int i=2; i*i<=n; i++){
            if(sieve[i]){
                for(int j=i*i; j<=n; j+=i){
                    sieve[j] = false;
                }
            }
        }
        
        vector<vector<int>> res;
        for(int i=1; i<=n/2; i++){
            if(sieve[i] && sieve[n-i]){
                res.push_back({i,n-i});
            }
        }
        return res;
    }
};