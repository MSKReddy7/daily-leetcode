int n = 1e3+1;

vector<int> spf(n);

void calc_spf(){

    for(int i=0; i<n; i++)
        spf[i] = i;

    for(int i=2; i*i<=n; i++)
        if(spf[i]==i)
            for(int j=i*i; j<n; j+=i)
                if(spf[j]==j)
                    spf[j] = i;

    // for(int i=0; i<n; i++)
    //     cout << i << '=' << spf[i] << "  "; 
}

class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        calc_spf();
        set<int> s;

        for(auto i : nums){
            while(i>1){
                s.insert(spf[i]);
                i/=spf[i];
            }
        }

        return s.size();
    }
};