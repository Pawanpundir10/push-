class Solution {
public:
   int dfs(vector<vector<int>>&grid,int i,int j,vector<vector<bool>>& visited)
   {
    int m=grid.size();
    int n=grid[0].size();
    

    if(i<0 || j<0 || i>=m || j>=n || grid[i][j]!=1 || visited[i][j])
    {
        return 0;
    }

    visited[i][j]=true;
    int currarea=1;
    
    currarea+=dfs(grid,i-1,j,visited);
    currarea+=dfs(grid,i+1,j,visited);
    currarea+=dfs(grid,i,j-1,visited);
    currarea+=dfs(grid,i,j+1,visited);

    return currarea;

   }







    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<bool>>visited(m,vector<bool>(n,false));

        int ans=0;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1 && !visited[i][j])
                {
                   int currentislandarea=dfs(grid,i,j,visited);
                   ans=max(ans,currentislandarea);
                }
            }
        }

        return ans;
    }
};