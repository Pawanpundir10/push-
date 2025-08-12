class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
               int a=INT_MAX;
               int b=INT_MAX;

               if(j-1>=0)
               {
                 a=matrix[i-1][j-1];
               }
               if(j+1<n)
               {
                b=matrix[i-1][j+1];
               }
               
            matrix[i][j]=matrix[i][j]+ min({matrix[i-1][j],a,b});
            }
        }
        int result=INT_MAX;
        int lastrow=n-1;
        for(int j=0;j<n;j++)
        {
           result=min(result,matrix[lastrow][j]);
        }

        return result;
    }
};