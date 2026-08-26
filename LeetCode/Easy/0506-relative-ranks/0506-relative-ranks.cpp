int mc = 0;
string myStr(int n){
    mc++;
    if(mc == 1) return "Gold Medal";
    if(mc == 2) return "Silver Medal";
    if(mc == 3) return "Bronze Medal";
    return to_string(mc);
}

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        mc = 0;
        priority_queue<pair<int, int>> pq;
        vector<string> res(score.size(),"");
        for(int i=0; i<score.size(); i++){
            pq.push({score[i],i});
        }
        while(!pq.empty()){
            pair<int, int> mx = pq.top();
            // cout << mx.first << ' ' << mx.second << endl;
            res[mx.second]+=myStr(mx.first);
            pq.pop();
        }
        return res;
    }
};