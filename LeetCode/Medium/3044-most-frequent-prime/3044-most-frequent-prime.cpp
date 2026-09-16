class Solution {
public:
    int mostFrequentPrime(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        
        if(max(r,c)<=1) return -1;
        
        int n = (int)pow(10,max(r,c));
        vector<bool> sieve(n+1,true);
        sieve[0] = sieve[1] = false;

        for(int i=2; i*i< n; i++)
            if(sieve[i])
                for(int j=i*i; j<=n; j+=i)
                    sieve[j] = false;
            
        
        map<int,int> primefreq;
        
        int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};
        int dy[] = {1, 1, 0, -1, -1, -1, 0, 1};

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                for(int k=0; k<8; k++){
                    int num = 0;
                    int x = i;
                    int y = j;
                    while(x>=0 && y>=0 && x<r && y<c){
                        num = num*10 + mat[x][y];
                        if(num>10 && sieve[num]) primefreq[num]++;
                        x += dx[k];
                        y += dy[k];
                    }
                }
            }
        }
        int mx = -1;
        int ans = -1;
        for(auto it: primefreq){
            if(it.second >= mx) {
                ans = it.first;
                mx = it.second;
            }
        }
        return ans;
    }
};