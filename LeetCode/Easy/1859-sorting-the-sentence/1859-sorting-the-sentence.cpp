class Solution {
public:
    string sortSentence(string s) {
        auto comp = [](string a, string b){
            return a[a.length()-1] < b[b.length()-1];
        };
        vector<string> strs;
        int i = 0;
        for(int j=1; j<s.length(); j++){
            if(s[j] == ' ' || j+1==s.length()){
                if(s[j] == ' ')
                    strs.push_back(s.substr(i,j-i));
                else
                    strs.push_back(s.substr(i,j-i+1));
                i = j+1;
                j++;
            }
        }
        sort(strs.begin(),strs.end(),comp);
        string res = "";
        
        for(int i=0; i<strs.size(); i++)
            strs[i].pop_back();

        for(auto it: strs) res += " " +  it;
        res.erase(res.begin());

        return res;
    }
};