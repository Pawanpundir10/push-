class Solution {
public:
    int m,n;
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
            if(grid[0][i]==1)
            {
                dp[0][i]=0;
            }
            else if(i>=1 && grid[0][i-1]==1)
            {
                dp[0][i]=0;
                grid[0][i]=1;
            }
            else
            {
                dp[0][i]=1;
            }
        }
        for(int i=0;i<m;i++)
        {
            if(grid[i][0]==1)
            {
                dp[i][0]=0;
            }
            else if(i>=1 && grid[i-1][0]==1)
            {
                dp[i][0]=0;
                grid[i][0]=1;
            }
            else
            {
                dp[i][0]=1;
            }
        }

        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    dp[i][j]=0;
                }
                else
                {
                dp[i][j]=dp[i][j-1]+dp[i-1][j];
                }
            }
        }

        return dp[m-1][n-1];


    }
};