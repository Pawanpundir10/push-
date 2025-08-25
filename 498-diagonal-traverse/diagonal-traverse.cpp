class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
      int m=mat.size();
      int n=mat[0].size();
       vector<int>result;

       int totald=m+n-1;

     for(int d=0;d<totald;d++)
     {
        vector<int>diagonal;
        int r=d<n?0:d-n+1;
        int c=d<n?d:n-1;

        while(r<m && c>=0)
        {
            diagonal.push_back(mat[r][c]);
            r++;
            c--;
        }

        if(d%2==0)
        {
          reverse(diagonal.begin(),diagonal.end());
        }

        result.insert(result.end(),diagonal.begin(),diagonal.end());
     }


     return result;
    }
};