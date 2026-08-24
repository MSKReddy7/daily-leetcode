class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int mx = 0;
        for(auto w: sentences){
            int count = 0;
            for(int i=0; i<w.length(); i++) count+= (w[i] == ' ');
            mx = max(count,mx);
        }
        return mx+1;
    }
};