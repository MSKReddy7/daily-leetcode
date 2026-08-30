class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int t) {
        int n = arr.size();
        t *= k;
        int cnt = 0;
        int sum = 0;
        
        for(int i=0; i<k; i++) sum += arr[i];
        cnt += sum>=t;
        
        for(int i=1; i<=n-k; i++){
            sum -= arr[i-1];
            sum += arr[i+k-1];
            cnt += sum>=t;
        }
        return cnt;
    }
};