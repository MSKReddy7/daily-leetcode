class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> m;
        for(auto i:s) m[i]++;

        for(auto i : s){
            if(m[i] == 1){
                return s.find(i);
                break;
            }
        }   

        return -1;
    }
};