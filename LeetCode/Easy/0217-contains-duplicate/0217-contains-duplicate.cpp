class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(auto i : nums){
            if(s.contains(i)) return 1;
            s.insert(i);
        }
        return 0;
    }
};