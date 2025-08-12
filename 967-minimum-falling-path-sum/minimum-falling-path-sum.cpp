class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>>dp=matrix;

        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
               int a=INT_MAX;
               int b=INT_MAX;

               if(j-1>=0)
               {
                 a=dp[i-1][j-1];
               }
               if(j+1<n)
               {
                b=dp[i-1][j+1];
               }
               
            dp[i][j]=dp[i][j]+ min({dp[i-1][j],a,b});
            }
        }
        int result=INT_MAX;
        int lastrow=n-1;
        for(int j=0;j<n;j++)
        {
           result=min(result,dp[lastrow][j]);
        }

        return result;
    }
};