class Solution {
public:
   int subcounter(vector<int>&arr)
   {
    int cons=0;
    int subcount=0;
    for(int &val:arr)
    {
        if(val==0)
        {
            cons=0;
        }
        else
        {
            cons++;
        }

        subcount+=cons;
    }

    return subcount;
   }

    int numSubmat(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();

        int result=0;
        for(int i=0;i<m;i++)
        {
            vector<int>arr(n,1);
            for(int j=i;j<m;j++)
            {
                for(int k=0;k<n;k++)
                {
                    arr[k]=arr[k]&mat[j][k];
                }

                result+=subcounter(arr);
            }
        }

        return result;
    }
};