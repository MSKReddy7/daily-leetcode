class Solution {
public:
    string truncateSentence(string s, int k) {
        int n = s.length();
        int i=1;
        for(; k>1; i++)
            k += s[i]==' ' ? -1 : 0; 
        for(; i<n && s[i]!=' '; i++);
        if(i!=n) s.resize(i);
        return s;
    }
};