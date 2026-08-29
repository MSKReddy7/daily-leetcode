class Solution {
public:
    long long splitArray(vector<int>& nums) {
        int n = nums.size();
        vector<bool> sieve(n,true);
        sieve[0] = sieve[1] = false;
        
        for(int i=2; i<n; i++){
            if(sieve[i]){
                for(long long j=1LL*i*i; j<n; j+=i){
                    sieve[j] = false;
                }
            }
        }

        long long a = 0;
        long long b = 0;

        for(int i=0; i<n; i++){
            if(sieve[i])
                a+=nums[i];
            else
                b+=nums[i];
        }
        cout << endl << a << ' ' << b ;
        return abs(a-b);

    }
};