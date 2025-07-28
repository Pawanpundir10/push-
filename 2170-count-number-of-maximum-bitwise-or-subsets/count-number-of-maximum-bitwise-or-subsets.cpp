class Solution {
public:
    
    int countsubset(int idx,int curror,vector<int>&nums,int maxor)
    {
    if(idx==nums.size())
    {
        if(curror==maxor)
        {
            return 1;
        }
        return 0;
    }


    int taken=countsubset(idx+1,curror | nums[idx],nums,maxor);

    int nottaken=countsubset(idx+1,curror,nums,maxor);

    return taken+nottaken;

    }





    int countMaxOrSubsets(vector<int>& nums) {
       int maxor=0;

       for(int num:nums)
       {
        maxor |= num;
       }

       int curror=0;

       return countsubset(0,curror,nums,maxor);
    }
};