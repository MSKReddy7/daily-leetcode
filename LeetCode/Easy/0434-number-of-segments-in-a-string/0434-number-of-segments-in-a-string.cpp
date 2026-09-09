class Solution {
public:
    int countSegments(string s) {
        if(s == "") return 0;
        int n = s.length();
        int c = 0;
        int j = 0; while(s[j] == ' ') j++;
        while(j<n){
            while(j<n && s[j] != ' ') j++;
            c++;
            while(j<n && s[j] == ' ') j++;
        }
        return c;
    }
};