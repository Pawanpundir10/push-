class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int hills=0;
        int valleys=0;

        if(nums.size()<3)
        {
            return 0;
        }
        int left=nums[0];
        for(int i=1;i<nums.size()-1;i++)
        {
          if(left>nums[i] && nums[i+1]>nums[i])
          {
              valleys++;
          }
          else if(left<nums[i] && nums[i+1]<nums[i])
          {
              hills++;
          }
          if(nums[i+1]!=nums[i])
          {
            left=nums[i];
          }
         
        }

        return hills+valleys;
    }
};