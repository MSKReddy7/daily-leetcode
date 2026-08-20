class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = nums.size();
        int even = 0;
        int odd = 0;
        for(int i=0; i<n; i++){
            if(nums[i]&1) odd++;
            else even++;
        }
        int i=0;
        while(even){
            nums[i++] = 0;
            even--;
        }
        while(odd){
            nums[i++] = 1;
            odd--;
        }
        return nums;
    }
};