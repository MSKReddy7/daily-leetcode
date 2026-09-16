class Solution {
public:
    int mostFrequentPrime(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();

        int m = max(r,c);
        if(m <= 1) return -1;

        int n = 1;
        for(int i=0; i<m; i++) n*=10;

        vector<char> sieve(n, true);
        sieve[0] = sieve[1] = false;

        for(int i=2; i*i<n; i++)
            if(sieve[i])
                for(int j=i*i; j<n; j+=i)
                    sieve[j] = false;

        vector<int> primefreq(n);

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
                        if(num >= n) break;
                        if(num > 10 && sieve[num])
                            primefreq[num]++;
                        x+=dx[k];
                        y+=dy[k];
                    }
                }
            }
        }

        int mx = 0;
        int ans = -1;

        for(int i = 2; i < n; i++) {
            if(primefreq[i] > 0 && primefreq[i] >= mx && sieve[i]) {
                mx = primefreq[i];
                ans = i;
            }
        }

        return ans;
    }
};