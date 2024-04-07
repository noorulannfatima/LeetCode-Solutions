/* 
An image smoother is a filter of the size 3 x 3 that can be applied to each cell of an image by rounding down 
the average of the cell and the eight surrounding cells (i.e., the average of the nine cells in the blue smoother). 
If one or more of the surrounding cells of a cell is not present, we do not consider it in the average 
(i.e., the average of the four cells in the red smoother).
Given an m x n integer matrix img representing the grayscale of an image, return the image after applying the smoother on each cell of it.
*/
class Solution {
public:
    vector <vector<int>> directions{ // Define directions for 8 neighboring cells  
        {-1, -1}, {-1, 0}, {-1, 1},  // top-left, top, top-right, 
        {0, -1}, {0, 0}, {0, 1},   // left, middle, right,
        {1, -1}, {1, 0}, {1, 1}  // bottom-left, bottom, bottom-right
    };
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size();  // Number of rows
        int n = img[0].size(); // Number of columns


        vector <vector<int>> result(m, vector<int>(n, 0));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int sum = 0;
                int count = 0;

                for(auto &it : directions){ // Iterate through each direction
                    int i_ = i + it[0];
                    int j_ = j + it[1];

                    if(i_ >= 0 && i_ < m && j_ >= 0 && j_ < n){  //valid coordinate
                        sum += img[i_][j_];
                        count++;
                    }
                }
            result[i][j]=sum/count; //Calculate average value of neighboring cells
            }
        }
    return result;  
    }
};
/*
Time Complexity: O(m * n) - where 'm' is the number of rows and 'n' is the number of columns in the input image.
Space Complexity: O(m * n) - space required for the result matrix to store the smoothed image.
*/