class Solution {
public:
    int similarPairs(vector<string>& words) {
        int n = words.size();
        int count = 0;

       vector<unordered_set<char>> buff(n);
        for (int i = 0; i < n; i++) 
            buff[i] = unordered_set<char>(words[i].begin(), words[i].end());
        
       for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++)
                    count += buff[i] == buff[j];
        
        return count;
    }
};