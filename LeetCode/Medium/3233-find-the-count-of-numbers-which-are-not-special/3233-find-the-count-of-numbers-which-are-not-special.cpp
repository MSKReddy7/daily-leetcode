int n;

vector<int> sieve;

void make_sieve(){
    sieve[0]  = 0;
    sieve[1] = 0;

    for(int i=2; i*i<=n; i++){
        if(sieve[i]){
            for(int j=i*i; j<=n; j+=i){
                sieve[j] = 0;
            }
        }
    }
}

class Solution {
public:
    int nonSpecialCount(int l, int r) {
        n = (int)sqrt(r);
        sieve.resize(n+1,1);
        make_sieve();
        int count = r-l+1;
        for(int i=2; i<=n; i++){
            if(sieve[i]){
                int sq = i*i;
                if(sq>=l && sq<=r) count--;
            }
        }
        return count;
    }
};