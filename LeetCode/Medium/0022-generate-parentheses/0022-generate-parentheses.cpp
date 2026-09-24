void gen(int n, int open, int close, vector<string>& res, string& temp){
    if(open+close == 2*n){
        res.push_back(temp);
        return;
    }
    if(open<n){
        temp.push_back('(');
        gen(n, open+1, close, res, temp);
        temp.pop_back();
    }
    if(close < open){
        temp.push_back(')');
        gen(n, open, close+1, res, temp);
        temp.pop_back();
    }
}

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string temp;
        gen(n, 0, 0, res, temp); 
        return res;
    }
};