class Solution {
public:
    vector<string> largestString(vector<int>& nums) {
        vector<string> res;
        for(int i=0; i<nums.size(); i++){
            int n = nums[i];
            int chr=97;
            string curr = "";
            while(n){
                int rem = n%2;
                if(rem){
                    if (chr <= 122)
                        curr = string(1, (char)chr) + curr;
                    else
                        curr = string("zz") + curr;
                }
                n/=2;
                chr++;
            }
            res.push_back(curr);
        }
        return res;
    }
};