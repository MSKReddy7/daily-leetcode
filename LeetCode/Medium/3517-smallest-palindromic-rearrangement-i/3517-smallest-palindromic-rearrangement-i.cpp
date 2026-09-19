class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();
        string mid = "";
        if(n&1) mid = s[n/2];

        string half = s.substr(0,n/2);

        sort(half.begin(),half.end());

        string rev = half;
        reverse(rev.begin(),rev.end());
        
        return half + mid + rev;
    }
};