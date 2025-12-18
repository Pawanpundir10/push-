class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int i=0;
        int j=0;
        int mini=INT_MAX;

        int n=nums.size();

        while(j<n)
        {
            sum+=nums[j];

            if(sum>=target)
            {
                mini=min(mini,j-i+1);
                while(sum>=target)
                {
                   mini=min(mini,j-i+1);
                   sum-=nums[i];
                   i++;
                }

            }
            j++;
        }

        return mini==INT_MAX?0:mini;
    }
};