class Solution {
public:

  bool subset(vector<int>&nums,int sum2,int n)
  {
    vector<vector<bool>>t(n+1,vector<bool>(sum2+1));
//i==weight
//j=sum
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            //weight=0 so sum will be false always
            if(i==0)
            {
                
                t[i][j]=false;
            }
            //sum=0 can be achived by any weight
            if(j==0)
            {
                t[i][j]=true;
            }
        }
    }

    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<sum2+1;j++)
        {
            //if weight is less than or equal to capacity 
            //choose max by OR in bool
            if(nums[i-1]<=j)
            {
                t[i][j]=(t[i-1][j-nums[i-1]] || t[i-1][j]);
            }
            else
            {
                t[i][j]=t[i-1][j];
            }
        }
    }

    return t[n][sum2];

  }


    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        int sum2=sum/2;
        if(sum%2==0)
        {
              return subset(nums,sum2,n);
        }
       return false;
    }
};