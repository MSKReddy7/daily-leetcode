class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.length();
        int mn = INT_MAX;
        string res = "";

        unordered_map<int,vector<pair<int,int>>> m;

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                int c = 0;
                for(int l=i; l<=j; l++)  c+=s[l]-'0';
                if(c==k){
                    m[j-i+1].push_back({i,j});
                    mn = min(mn,j-i+1);
                }
            }
        }
        for(auto p : m[mn]) {
            string cur = s.substr(p.first, p.second-p.first+1);

            if(res=="" || cur<res) res = cur;
        }
        
        return res;
    }
};