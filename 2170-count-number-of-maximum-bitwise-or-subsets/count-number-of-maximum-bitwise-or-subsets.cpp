class Solution {
public:
    
    int countsubset(int idx,int curror,vector<int>&nums,int maxor,vector<vector<int>>&t)
    {
    if(idx==nums.size())
    {
        if(curror==maxor)
        {
            return 1;
        }
        return 0;
    }

    if(t[idx][curror]!=-1)
    {
        return t[idx][curror];
    }


    int taken=countsubset(idx+1,curror | nums[idx],nums,maxor,t);

    int nottaken=countsubset(idx+1,curror,nums,maxor,t);

    return t[idx][curror]=taken+nottaken;

    }

    int countMaxOrSubsets(vector<int>& nums) {
       int maxor=0;
       int n=nums.size();
       for(int num:nums)
       {
        maxor |= num;
       }
       vector<vector<int>>t(n+1,vector<int>(maxor+1,-1));
       int curror=0;

       return countsubset(0,curror,nums,maxor,t);
    }
};