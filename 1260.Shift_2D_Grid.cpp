/*
Problem Overview: Given a 2D grid of size m x n and an integer k. You need to shift the grid k times.
In one shift operation:
-> Element at grid[i][j] moves to grid[i][j + 1].
-> Element at grid[i][n - 1] moves to grid[i + 1][0].
-> Element at grid[m - 1][n - 1] moves to grid[0][0].
Return the 2D grid after applying shift operation k times.

Example 1:
Input: grid = [[1,2,3],[4,5,6],[7,8,9]], k = 1
Output: [[9,1,2],[3,4,5],[6,7,8]]
*/

// Time Complexity: O(m * n), Space Complexity:O(m * n)

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> ans(m, vector<int>(n));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                int pos = (i * n + j + k) % (m * n);
                int r = pos / n;
                int c = pos % n;

                ans[r][c] = grid[i][j];
            }
        }
        return ans;    
    }
};

