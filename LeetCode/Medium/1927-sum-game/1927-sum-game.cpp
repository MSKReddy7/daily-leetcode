class Solution {
public:
    bool sumGame(string num) {
        int n = num.length();
        
        int leftSum = 0, leftQue = 0;
        int rightSum = 0, rightQue = 0;

        for(int i=0; i<n; i++){
            if(i<n/2){
                if(num[i] != '?') leftSum += num[i]-'0';
                else leftQue++;
                continue;
            }
            if(num[i] != '?') rightSum += num[i]-'0';
            else rightQue++;
        }    

        if (leftQue == rightQue)
            return leftSum != rightSum;

        if ((leftQue + rightQue) % 2 == 1)
            return true;

        return leftSum - rightSum != (rightQue - leftQue) * 9 / 2;
    }
};