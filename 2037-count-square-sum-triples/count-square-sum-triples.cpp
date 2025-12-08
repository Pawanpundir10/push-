class Solution {
public:
    int countTriples(int n) {
        int count=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n-1;j++)
            {
                int sum = (i*i)+(j*j);
                int k=sqrt(sum);
                if(k*k==sum && k<=n)
                {
                    count++;
                }
            }
        }
        return count*2;

    }
};