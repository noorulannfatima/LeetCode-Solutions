/*
Problem Overview:Given an m x n matrix of distinct numbers, return all lucky numbers in the matrix in any order.
-> A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.
Example 1:
Input: matrix = [[3,7,8],[9,11,13],[15,16,17]]
Output: [15]
Explanation: 15 is the only lucky number since it is the minimum in its row and the maximum in its column.
*/

//Time Complexity: O(m * n), Space Complexity: O(m * n)

class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> ans; 
        int row = matrix.size();
        int col = matrix[0].size();

        // Initialize vectors to store the minimum value in each row
        vector<int> rowmin(row, INT_MAX);
        // Initialize vectors to store the maximum value in each column
        vector<int> colmax(col, INT_MIN);
        
        // Find the minimum value in each row and the maximum value in each column
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                // Update rowmin[i] with the minimum value in row i
                rowmin[i] = min(rowmin[i], matrix[i][j]);
                // Update colmax[j] with the maximum value in column j
                colmax[j] = max(colmax[j], matrix[i][j]);
            }
        }
        // Check for lucky numbers
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if(matrix[i][j] == rowmin[i] && matrix[i][j] == colmax[j]) {
                    // Add the lucky number to the result vector
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        return ans;
    }
};
//Time Complexity: O(m * n), Space Complexity: O(m * n)

