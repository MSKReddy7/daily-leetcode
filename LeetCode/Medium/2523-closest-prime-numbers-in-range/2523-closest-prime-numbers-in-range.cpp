class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool> sieve(right+1,true);
        sieve[0] = sieve[1] = false;
        for(int i=2; i*i<=right; i++){
            if(sieve[i]){
                for(int j=i*i; j<=right; j+=i){
                    sieve[j]=false;
                }
            }
        }
        vector<int> res;
        for(int i=left; i<=right; i++){
            if(sieve[i]) res.push_back(i);
        }
        if(res.size()<=1) return {-1,-1};
        vector<int> prm;
        prm.push_back(res[0]);
        prm.push_back(res[1]);
        int mn = prm[0]-prm[1];
        for(int i=1; i<res.size()-1; i++){
            if(mn < (res[i]-res[i+1])){
                mn = res[i]-res[i+1];
                prm[0] = res[i];
                prm[1] = res[i+1];
            }
        }
        return prm;
    }
};