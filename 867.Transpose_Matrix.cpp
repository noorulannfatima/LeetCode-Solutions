/*
Given a 2D integer array matrix, return the transpose of matrix.
The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.
*/

//Time:  O(m * n)
// Space: O(n * m)
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    
    // Create a new matrix with dimensions swapped
    vector<vector<int>> result(n, vector<int>(m));
    
    // Iterate through the original matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            // Transpose the elements
            result[j][i] = matrix[i][j];
        }
    }   
    return result;      
    }
};

/* Another method....
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> result(A[0].size(), vector<int>(A.size()));
        for (int r = 0; r < A.size(); ++r) {
            for (int c = 0; c < A[0].size(); ++c) {
                result[c][r] = A[r][c];
            }
        }
        return result;
    }
};
/ Time:  O(r * c)
/Space: O(1)
*/


