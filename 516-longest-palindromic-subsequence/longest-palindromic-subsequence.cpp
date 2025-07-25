class Solution {
public:
   int ans(string s,string s1)
   {
    int n=s.length();
    int m=s1.length();
    vector<vector<int>>dp(n+1,vector<int>(m+1));
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
             if(i==0)
             {
                dp[i][j]=0;
             }
             if(j==0)
             {
                dp[i][j]=0;
             }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
             if(s[i-1]==s1[j-1])
             {
                dp[i][j]=1+dp[i-1][j-1];
             }
             else
             {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
             }
        }
    }
    return dp[n][m];
   }


    int longestPalindromeSubseq(string s) {
        string s1=s;
        reverse(s1.begin(),s1.end());

        return ans(s,s1);
    }
};