class Solution {
public:

   vector<vector<int>>dir={{1,0},{-1,0},{0,1},{0,-1}};


    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        if(m==0) return 0;
        int n=grid[0].size();
        if(n==0) return 0;

        queue<pair<int,int>>q;
        int freshoranges=0;
        int minutes=0;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
                else if(grid[i][j]==1)
                {
                    freshoranges++;
                }
            }
        }

        while(!q.empty() && freshoranges>0)
        {
            int qsize=q.size();
            minutes++;
            for(int i=0;i<qsize;i++)
            {
                pair<int,int>curr=q.front();
                q.pop();
                int r=curr.first;
                int c=curr.second;

                for(auto d:dir)
                {
                    int nr=r+d[0];
                    int nc=c+d[1];

                    if (nr < 0 || nr >= m || nc < 0 || nc >= n || grid[nr][nc] != 1)continue;

                    grid[nr][nc]=2;
                    freshoranges--;
                    q.push({nr,nc});
                    
                }
            }
        }

        if(freshoranges==0)
        {
            return minutes;
        }
        

    return -1;

        
    }
};