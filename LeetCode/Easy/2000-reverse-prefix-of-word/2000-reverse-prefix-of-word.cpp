class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.length();
        int i=0;
        for(; i<n && word[i]!=ch; i++);
        if(i!=n)
            reverse(word.begin(),word.begin()+i+1);
        return word;
    }
};