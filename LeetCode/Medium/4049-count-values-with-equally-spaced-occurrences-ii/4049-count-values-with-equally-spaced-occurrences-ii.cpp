class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,vector<int>> mp;
        for(int i=0; i<n; i++) mp[nums[i]].push_back(i);
        int count = 0;
        for(auto it: mp){
            bool flag = true;

            if(it.second.size()<3) 
                flag = false;
            else {
                for(int i=1; i<it.second.size()-1; i++){
                    if(it.second[i] - it.second[i-1] != it.second[i+1] - it.second[i]) {
                        flag = false;
                        break;
                    }
                }
            }
            count += flag;
        }
        return count;
    }
};