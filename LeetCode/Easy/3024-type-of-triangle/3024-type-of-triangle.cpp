class Solution {
public:
    string triangleType(vector<int>& n) {
        if (n[0] + n[1] <= n[2] || n[1] + n[2] <= n[0] || n[0] + n[2] <= n[1])
            return "none";
        
        if(n[0] == n[1] && n[1] == n[2] && n[2]==n[0])
            return "equilateral";
        
        if(n[0] == n[1] || n[1] == n[2] || n[2]==n[0])
            return "isosceles";
        
        return "scalene";
        
    }
};