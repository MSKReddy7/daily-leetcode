class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int n = s.length();
        int i = 0;
        int j = n - 1;
        while (i <= j) {
            if(s[j] == y) {
                swap(s[i],s[j]);
                i++;
            }
            else {
                j--;
            }
        }
        return s;
    }
};