class Solution {
public:
    int similarPairs(vector<string>& words) {
        int n = words.size();
        int count = 0;
        for(int i=0; i<n; i++){
            unordered_set<char> s(words[i].begin(),words[i].end());
            for(int j=i+1; j<n; j++){
                if(i == j) continue;
                unordered_set<char> ss(words[j].begin(),words[j].end());
                count += s==ss;
            }
        }
        return count;
    }
};