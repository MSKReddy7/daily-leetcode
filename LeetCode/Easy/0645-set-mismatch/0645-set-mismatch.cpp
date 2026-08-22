class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int n = nums.size();
        int sum = n*(n+1)/2;

        int csum = 0;
        int d;
        for(auto i: nums) csum+=i;
        for(int i =0; i<n-1; i++){
            if(nums[i] ==  nums[i+1]) d = nums[i];
        }

        cout << d << endl;

        return {d,sum - (csum-d)};
    }
};