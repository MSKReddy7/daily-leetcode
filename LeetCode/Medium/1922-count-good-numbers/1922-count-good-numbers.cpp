typedef long long ll;
int mod = 1e9+7;

long long getPow(ll a, ll b){
    if(!b) return 1;
    ll res = getPow(a,b/2)%mod;
    return (b%2 ? a : 1) * res*res%mod;
}

class Solution {
public:
    int countGoodNumbers(long long n) {
        return (getPow(5,(n+1)/2)%mod) * (getPow(4,n/2)%mod) % mod;
    }
};