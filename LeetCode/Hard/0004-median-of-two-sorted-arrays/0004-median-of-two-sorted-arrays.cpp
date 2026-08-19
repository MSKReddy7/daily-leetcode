class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        
        int n1 = nums1.size();
        int n2 = nums2.size();
        int n3 = n1+n2;
        
        vector<int> merged;

        while(i<n1 && j<n2){
            if(nums1[i] < nums2[j])
                merged.push_back(nums1[i++]);
            else
                merged.push_back(nums2[j++]);
        }

        while(i<n1) merged.push_back(nums1[i++]);
        while(j<n2) merged.push_back(nums2[j++]);

        if(n3 % 2)
            return merged[n3/2];

        return (merged[n3/2-1]+merged[n3/2])/2.;
    }
};