int get(int n){
    if(!n) return n;
    return n%10 + get(n/10);
}
class Solution {
public:
    int minElement(vector<int>& nums) {
        int mn = INT_MAX;
        for(int i=0; i<nums.size(); i++)
            mn = min(mn, get(nums[i]));
        return mn;
    }
};