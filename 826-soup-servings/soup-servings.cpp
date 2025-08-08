class Solution {
public:
   double solve(int a,int b,vector<vector<double>>&memo)
   {
    if(a<=0 && b>0)
    {
        return 1.0;
    }
    if(a<=0 && b<=0)
    {
        return 0.5;
    }
    if(b<=0 && a>0)
    {
        return 0;
    }

    if(memo[a][b]!=-1.0)
    {
        return memo[a][b];
    }

    double result=0.0;

    result+=solve(a-4,b,memo);
    result+=solve(a-3,b-1,memo);
    result+=solve(a-2,b-2,memo);
    result+=solve(a-1,b-3,memo);

    result*=0.25;

    memo[a][b]=result;

    return result;

   }




    double soupServings(int n) {
        if(n>=4800)
        {
            return 1.0;
        }
        int units=(n+24)/25;

        vector<vector<double>>memo(units+1,vector<double>(units+1,-1.0));

        return solve(units,units,memo);
    }
};