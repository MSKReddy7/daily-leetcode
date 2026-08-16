class Solution {
public:
    string reverseWords(string s) {
        int j = 0;
        for (int i = 0; i < s.size(); i++){
            if(s[i] != ' ')
                s[j++] = s[i];
            else if(j > 0 && s[j-1] != ' ') 
                s[j++] = ' ';
        }
            
        if (j > 0 && s[j-1] == ' ') j--;

        s.resize(j);
        reverse(s.begin(), s.end());

        int start = 0;
        for (int i = 0; i <= s.size(); i++) {
            if (i == s.size() || s[i] == ' ') {
                reverse(s.begin() + start, s.begin() + i);
                start = i + 1;
            }
        }
        return s;
    }
};