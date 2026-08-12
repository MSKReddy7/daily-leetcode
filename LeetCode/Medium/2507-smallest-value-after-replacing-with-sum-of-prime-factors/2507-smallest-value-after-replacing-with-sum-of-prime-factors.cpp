int n;

vector<int> spf;

void calc_spf(){

    for(int i=0; i<n; i++)
        spf[i] = i;

    for(int i=2; i*i<=n; i++)
        if(spf[i]==i)
            for(int j=i*i; j<n; j+=i)
                if(spf[j]==j)
                    spf[j] = i;
}

int sumPrimeFact(int n){
    int sum = 0;
    while(n>1){
        sum += spf[n];
        n/=spf[n];
    }
    return sum;

}

class Solution {
public:
    int smallestValue(int n) {
        ::n = n+1;
        spf.resize(n+1);

        calc_spf();
        while(n!=sumPrimeFact(n))
            n = sumPrimeFact(n); 
        return n;
    }
};