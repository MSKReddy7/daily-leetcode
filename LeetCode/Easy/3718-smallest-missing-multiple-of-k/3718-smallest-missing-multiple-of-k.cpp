class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int i=1;
        while(find(nums.begin(),nums.end(),k*i) != nums.end())
            i++;
        return k*i;
    }
};