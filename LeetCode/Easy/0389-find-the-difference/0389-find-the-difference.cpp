class Solution {
public:
    char findTheDifference(string s, string t) {
        int i=0,j=0;
        char res=0;
        while(s[i] || t[j])
        { 
            if(s[i]) res ^= s[i++];
            if(t[j]) res ^= t[j++];
        }
        return res;
    }
};