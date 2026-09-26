class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n = s.length();
        unordered_map<string,string> mp;
        for(auto i: knowledge){
            mp[i[0]] = i[1];
        }
        string res;
        int prev = 0;
        int i=0;
        int j=0;
        while(i<n && j<n){
            while(i<n && s[i] != '(') i++;
            j=i;
            while(j<n && s[j] != ')') j++;
            res += s.substr(prev,i-prev);
            prev = j+1;
            if(i==j) break;
            string sub = s.substr(i+1, j-i-1);
            res +=  (mp[sub].length()==0 ? "?" : mp[sub]);
            i=j;
        }
        return res;
    }
};