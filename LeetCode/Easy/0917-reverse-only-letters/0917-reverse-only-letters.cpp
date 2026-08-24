class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n = s.length();
        string alphabets = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
        int i=0;
        int j=n-1;

        while(i<j){
            while(i<j && !alphabets.contains(s[i])) i++;   
            while(i<j && !alphabets.contains(s[j])) j--;
            swap(s[i],s[j]);
            i++;
            j--;   
        }

        return s;
    }
};