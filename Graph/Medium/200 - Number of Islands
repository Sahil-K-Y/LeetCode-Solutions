class Solution {
public:
    void dfs(int i, int j, vector<vector<char>>& grid, int n, int m) {
        if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] != '1')
            return;

        grid[i][j] = '0'; // mark visited

        dfs(i + 1, j, grid, n, m);
        dfs(i - 1, j, grid, n, m);
        dfs(i, j + 1, grid, n, m);
        dfs(i, j - 1, grid, n, m);
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int islands = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1') {
                    dfs(i, j, grid, n, m);
                    islands++;
                }
            }
        }
        return islands;
    }
};
