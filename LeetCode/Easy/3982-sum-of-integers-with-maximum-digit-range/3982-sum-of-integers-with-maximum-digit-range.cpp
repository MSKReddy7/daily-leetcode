class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        unordered_map<int,int> m;
        int sum = 0;
        int gmx = 0;
        for(auto i: nums){
            int  mx = INT_MIN;
            int mn = INT_MAX;
            int temp = i;
            while(temp){
                int rem = temp%10;
                mx = max(mx,rem);
                mn = min(mn,rem);
                temp/=10;
            }
            gmx = max(gmx,mx-mn);
            m[i] = mx-mn;
        }
        for(auto i: nums)
            if(m[i] == gmx) sum += i;
  
        return sum;
    }
};