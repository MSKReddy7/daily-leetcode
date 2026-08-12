int check(int n){
    if(n<=1) return 0;
    if(n<=3) return 1;

    for(int i=2; i*i<=n; i++)
        if(n%i==0)
            return 0;
    
    return 1;
}


class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        map<int,int> freq;
        for(int i : nums){
            freq[i]++;
        }
        for(auto i : freq){
            if(check(i.second)) return 1;
        }
        return 0;
    }
};