class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> res;
        for(int i=0; i<boxes.length(); i++){
            int count = 0;
            for(int j=i-1; j>=0; j--){
                if(boxes[j]-'0') count += abs(i-j);
            }
            for(int k=i+1; k<boxes.length(); k++){
                if(boxes[k]-'0') count += abs(i-k);
            }
            res.push_back(count);
        }
        return res;
    }
};