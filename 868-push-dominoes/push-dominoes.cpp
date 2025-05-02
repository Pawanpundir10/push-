class Solution {
public:
    string pushDominoes(string dominoes) {
       int n=dominoes.length();

       vector<int>rightclosest(n);
        vector<int>leftclosest(n);

        for(int i=0;i<n;i++)
        {
            if(dominoes[i]=='R')
            {
              leftclosest[i]=i;  
            }
            else if(dominoes[i]=='.')
            {
              leftclosest[i]=i>0?leftclosest[i-1]:-1;
            }
            else
            {
                leftclosest[i]=-1;
            }
        }

        for(int i=n-1;i>=0;i--)
        {
            if(dominoes[i]=='L')
            {
              rightclosest[i]=i;  
            }
            else if(dominoes[i]=='.')
            {
              rightclosest[i]=i<n-1?rightclosest[i+1]:-1;
            }
            else
            {
                rightclosest[i]=-1;
            }
        }

        string result(n ,' ');
        for(int i=0;i<n;i++)
        {
            int distR = (rightclosest[i] == -1) ? INT_MAX : abs(i - rightclosest[i]);
            int distL = (leftclosest[i] == -1) ? INT_MAX : abs(i - leftclosest[i]);

            if (distL == distR) {
                result[i] = '.';
            } else if (distL < distR) {
                result[i] = 'R';  
            } else {
                result[i] = 'L';  
            }
        }


   return result;

    }
};