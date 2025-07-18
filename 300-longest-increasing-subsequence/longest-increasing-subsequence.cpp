class Solution {
public:

int ceilidx(vector<int>&tail,int begin,int end,int target)
  {
      while(end>begin)
      {
          int mid=begin+(end-begin)/2;
          if(tail[mid]>=target)
          {
              end=mid;
          }
          else
          {
              begin=mid+1;
          }
      }
      
      return end;
  }
  
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
        {
            return 0;
        }
        vector<int>tail(n);
        int len=1;
        
        tail[0]=nums[0];
        
        for(int i=1;i<n;i++)
        {
            if(nums[i]>tail[len-1])
            {
                tail[len]=nums[i];
                len++;
            }
            
            else
            {
                int c=ceilidx(tail,0,len-1,nums[i]);
                tail[c]=nums[i];
            }
        }
        
        return len;
        
    }
};