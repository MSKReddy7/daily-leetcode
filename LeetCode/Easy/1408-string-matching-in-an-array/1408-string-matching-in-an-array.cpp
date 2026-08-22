class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> res;
        set<string>seen;
        for(int i=0; i<words.size(); i++){
            for(int j=0; j<words.size(); j++){
                if(i!=j && words[i].contains(words[j]) && !seen.contains(words[j])){
                    res.push_back(words[j]);
                    seen.insert(words[j]);
                }
            }
        }
        return res;
    }
};