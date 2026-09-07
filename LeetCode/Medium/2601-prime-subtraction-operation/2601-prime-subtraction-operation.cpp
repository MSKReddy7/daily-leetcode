unordered_set<int>primes = {2,3};

bool isPrime(int n){
    if(n<=1) return 0;
    if(primes.contains(n)) return true;
    for(int i=2; i*i<=n; i++)
        if(n%i == 0) 
            return false;
    primes.insert(n);
    return true;
}

void inc(int& n){
    n++;
    while(!isPrime(n)) n++;
}

class Solution {
public:
    bool primeSubOperation(vector<int>& nums) {
        int n = nums.size();
        for(int i=n-1; i>0; i--){
            if(nums[i-1]<nums[i]) continue;
            
            int p = 0;
            while((nums[i-1]-p) >= nums[i]) {
                inc(p);
                if(p>=nums[i-1]) return false;
            }
            nums[i-1] -= p;
        }
        return true;
    }
};