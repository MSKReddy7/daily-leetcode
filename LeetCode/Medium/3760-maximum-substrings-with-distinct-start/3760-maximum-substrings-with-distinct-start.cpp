class Solution {
public:
    int maxDistinct(string s) {
        int count = 0;
        set<char> st;
        for(auto i: s) 
            st.insert(i);
        return st.size();
    }
};