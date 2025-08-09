class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);
        vector<int>dp(n-1);
        vector<int>dp2(n-1);

        dp[0]=nums[0];
        for(int i=1;i<n-1;i++)
        {
            int pick=nums[i];
            int notpick=dp[i-1];
            if(i>=2)
            {
                pick+=dp[i-2];
            }

            dp[i]=max(pick,notpick);
        }
        dp2[0]=nums[1];
        for(int i=1;i<n-1;i++)
        {
            int pick=nums[i+1];
            int notpick=dp2[i-1];
            if(i>=2)
            {
                pick+=dp2[i-2];
            }

            dp2[i]=max(pick,notpick);
        }

        return max(dp[n-2],dp2[n-2]);
    }
};