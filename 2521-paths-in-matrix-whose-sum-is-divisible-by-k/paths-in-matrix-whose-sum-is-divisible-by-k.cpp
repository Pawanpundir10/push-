class Solution {
public:
    int M = 1e9 + 7;

    int numberOfPaths(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        int t[m+1][n+1][k+1];
        memset(t, 0, sizeof(t));
        // t[i][j][remain] = number of paths from [i][j] to [m-1][n-1] with current remainder = remain

        // Base case same as recursion
        for(int remain = 0; remain < k; remain++) {
            t[m-1][n-1][remain] = ((remain + grid[m-1][n-1]) % k == 0 ? 1 : 0);
        }

        for(int row = m - 1; row >= 0; row--) {
            for(int col = n - 1; col >= 0; col--) {

                for(int remain = 0; remain < k; remain++) {

                    if(row == m - 1 && col == n - 1)
                        continue;

                    int newRemain = (remain + grid[row][col]) % k;

                    long long down  = t[row + 1][col][newRemain];
                    long long right = t[row][col + 1][newRemain];

                    t[row][col][remain] = (down + right) % M;
                }
            }
        }

        return t[0][0][0];
    }
};

