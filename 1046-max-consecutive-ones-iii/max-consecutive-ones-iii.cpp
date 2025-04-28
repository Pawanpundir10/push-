class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int n=nums.size();
       int i=0;
       int j=0;
       int count=0;
       while(j<n)
       {
        if(nums[j]==0)
        {
            k--;
        }
        while(k<0)
        {
            if(nums[i]==0)
            {
                k++;
            }
            i++;
        }
        count=max(count,j-i+1);
        j++;
       }

       return count;
    }
};