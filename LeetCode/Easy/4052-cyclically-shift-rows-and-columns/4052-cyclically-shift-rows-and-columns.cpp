vector<int> shift(vector<int>& row,int shift, int n){
    if(!shift) return row;
    vector<int> dup;
    for(int i=shift; i<n+shift; i++)
        dup.push_back(row[i%n]); 
    return dup;
}
class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        vector<vector<int>> res;
        for(int i=0; i<n; i++){
            grid[i] = shift(grid[i],rowShift[i],n);
        }
        for(int j=0; j<n; j++){
            vector<int> col;
            for(int i=0; i<n; i++){
                col.push_back(grid[i][j]);
            }
            col = shift(col,colShift[j],n);
            for(int i=0; i<n; i++){
                grid[i][j] = col[i];
            }
        }
        return grid;
    }
};