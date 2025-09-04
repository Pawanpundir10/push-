class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zerocount=0;
        for(int num:nums)
        {
            if(num==0)
            {
                zerocount++;
            }
        }
        if(zerocount>1)
        {
            fill(nums.begin(),nums.end(),0);
        }

        int productwithoutzero=1;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
              productwithoutzero*=nums[i];
            }
        }

        if(zerocount==1)
        {
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==0)
                {
                    nums[i]=productwithoutzero;
                }
                else
                {
                    nums[i]=0;
                }
            }
        }
        else if(zerocount==0)
        {
            for(int i=0;i<nums.size();i++)
            {
                nums[i]=productwithoutzero/nums[i];
            }
        }

        return nums;
    }
};