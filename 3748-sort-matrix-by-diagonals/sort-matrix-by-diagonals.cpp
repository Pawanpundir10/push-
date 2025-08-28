class Solution {
public:
    int n;
    void sortdiagonal(int row,int col,vector<vector<int>>& grid,bool asc)
    {
    int i=row;
    int j=col;
    vector<int>diagonal;
    while(i<n && j<n)
    {
       diagonal.push_back(grid[i][j]);
       i++;
       j++;
    }
    if(asc)
    {
        sort(diagonal.begin(),diagonal.end());
    }
    else
    {
        sort(diagonal.rbegin(),diagonal.rend());
    }
    i=row;
    j=col;
    for(int &val:diagonal)
    {
        grid[i][j]=val;
        i++;
        j++;
    }

    }







    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
      n=grid.size();
      for(int row=0;row<n;row++)
      {
        sortdiagonal(row,0,grid,false);
      } 
      for(int col=1;col<n;col++)
      {
        sortdiagonal(0,col,grid,true);
      } 

      return grid;
    }
};