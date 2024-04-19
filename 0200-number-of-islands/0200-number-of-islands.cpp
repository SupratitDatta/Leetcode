class Solution {
public:
void solve(int r, int c, vector<vector<char>>& grid, vector<vector<int>>& v) {
        int n = grid.size();
        int m = grid[0].size();
        v[r][c] = 1;
        int dp1[4] = {1, -1, 0, 0};
        int dp2[4] = {0, 0, -1, 1};
        
        for (int i = 0; i < 4; i++) {
            int a = dp1[i] + r; 
            int b = dp2[i] + c; 
            if (a >= 0 && a < n && b >= 0 && b < m && !v[a][b] && grid[a][b] == '1') {
                solve(a, b, grid, v);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int k = 0;
        vector<vector<int>> v(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1' && !v[i][j]) {
                    solve(i, j, grid, v);
                    k++;
                }
            }
        }
        return k;
    }
};