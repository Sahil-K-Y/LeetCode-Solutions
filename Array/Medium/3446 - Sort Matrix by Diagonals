class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();

        // bottom-left including main diagonal: starts where i >= j
        for (int i = 0; i < n; i++) {
            sortDiagonal(grid, i, 0, /*bottomLeft=*/true);
        }

        // top-right (strictly above main): starts where i < j
        for (int j = 1; j < n; j++) {
            sortDiagonal(grid, 0, j, /*bottomLeft=*/false);
        }

        return grid;
    }

    void sortDiagonal(vector<vector<int>>& grid, int i, int j, bool bottomLeft) {
        int n = grid.size();
        vector<int> diag;

        int x = i, y = j;
        while (x < n && y < n) {
            diag.push_back(grid[x][y]);
            x++; y++;
        }

        if (bottomLeft) {
            // non-increasing (descending)
            sort(diag.begin(), diag.end(), greater<int>());
        } else {
            // non-decreasing (ascending)
            sort(diag.begin(), diag.end());
        }

        x = i; y = j;
        int k = 0;
        while (x < n && y < n) {
            grid[x][y] = diag[k++];
            x++; y++;
        }
    }
};
