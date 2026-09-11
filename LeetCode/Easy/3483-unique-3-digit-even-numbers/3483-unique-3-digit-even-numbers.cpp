class Solution {
public:
    int totalNumbers(vector<int>& d) {
        int n = d.size();
        unordered_set<int> s;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i!=j){
                    for(int k=0; k<n; k++){
                        if(k!=i && k!=j){
                            cout << d[i] << ' ' << d[j] << ' ' << d[k] << endl;
                            if(d[i] && ((d[k])&1) == 0)
                                s.insert((d[i]*10 + d[j])*10 + d[k]);
                        }
                    }
                }
            }
        }
        return s.size();
    }
};