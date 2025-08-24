class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int k=1;
        int ans=0;
        int i=0;
       for(int j=0;j<nums.size();j++)
       {
            if(nums[j]==0)
            {
                k--;
            }
            while(k<0)
            {
                if(nums[i]==0) k++;
                i++;
            }
            ans=max(ans,j-i);
       }
        
     return ans;
    }
};