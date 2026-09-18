class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int r = image.size();
        int c = image[0].size();
        cout << r << ' ' << c;
        for(int i=0; i<r; i++){
            for(int j=0; j<c/2; j++){
                swap(image[i][j],image[i][c-j-1]);
            }
            for(int j=0; j<c; j++){
                image[i][j] ^= 1;
            }
        }

        return image;
    }
};