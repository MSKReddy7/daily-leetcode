void generate(string& digits, int idx, unordered_map<int,string>& mp, vector<string>& res,string& temp){
    if(idx == digits.length()){
        res.push_back(temp);
        return;
    }
    for(auto i: mp[digits[idx] - '0']){
        temp.push_back(i);
        generate(digits,idx+1,mp,res,temp);
        temp.pop_back();
    }
}

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<int,string> mp = {
                       {2,"abc"}, {3,"def"},
            {4,"ghi"}, {5,"jkl"}, {6,"mno"},
            {7,"pqrs"},{8,"tuv"}, {9,"wxyz"}
        };

        vector<string> res;
        string temp = "";

        generate(digits,0,mp,res,temp);
        return res;
    }
};