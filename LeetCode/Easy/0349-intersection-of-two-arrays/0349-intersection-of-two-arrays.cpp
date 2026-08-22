class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        // sort(nums1.begin(),nums1.end());
        // sort(nums2.begin(),nums2.end());
        
        unordered_map<int,bool> m;

        for(auto i: nums1) 
            m[i] = false;

        for(auto i: nums2) 
            if(m.contains(i)) m[i] = true;

        for(auto it: m)
            if(it.second) res.push_back(it.first);
    
        return res;
    }
};