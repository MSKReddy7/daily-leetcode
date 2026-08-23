class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> m;
        string vowels = "aeiou";
        for(auto i: s) m[i]++;
        int vm = 0;
        int cm = 0;
        for(auto i: m){
            if(vowels.contains(i.first)) vm = max(vm,i.second);
            else cm = max(cm,i.second);
        }
        return vm+cm;
    }
};