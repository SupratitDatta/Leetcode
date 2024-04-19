class Solution {
public:
void solve(int r, int c, vector<vector<char>>& grid, vector<vector<int>>& vis) {
        int n = grid.size();
        int m = grid[0].size();
        vis[r][c] = 1;
        int dp1[4] = {1, -1, 0, 0};
        int dp2[4] = {0, 0, -1, 1};
        
        for (int i = 0; i < 4; i++) {
            int a = dp1[i] + r; 
            int b = dp2[i] + c; 
            if (a >= 0 && a < n && b >= 0 && b < m && !vis[a][b] && grid[a][b] == '1') {
                solve(a, b, grid, vis);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int k = 0;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1' && !vis[i][j]) {
                    solve(i, j, grid, vis);
                    k++;
                }
            }
        }
        return k;
    }
};