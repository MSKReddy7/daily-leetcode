class Solution {
public:
    bool isFascinating(int n1) {
        long long n = n1;
        int n2 = n*2;
        int n3 = n*3;
        n = (n*pow(10,(int)log10(n2)+1) + n2)*pow(10,(int)log10(n3)+1) + n3;
        set<int> seen;
        
        cout << n;
        
        while(n){
            int rem = n%10;
            if(!rem || seen.contains(rem)) return false;
            seen.insert(rem);
            n/=10;
        }
        return true;
    }
};