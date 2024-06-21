class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] != color) {
            floodFill(image, sr, sc, image[sr][sc], color);
        }

        return image;
    }

    void floodFill(vector<vector<int>>& image, int row, int col, int currentColor, int targetColor) {
        if(row < 0 || row >= image.size() || col < 0 || col >= image[0].size())
            return;
        if(image[row][col] == currentColor) {
            image[row][col]= targetColor;
            floodFill(image, row-1, col, currentColor, targetColor);
            floodFill(image, row+1, col, currentColor, targetColor);
            floodFill(image, row, col-1, currentColor, targetColor);
            floodFill(image, row, col+1, currentColor, targetColor);
        }
        return;
    }
};