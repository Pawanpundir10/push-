class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalsum=0;
        int currmax=0;
        int maxsum=INT_MIN;
        int currmin=0;
        int minsum=INT_MAX;

        for(int x:nums)
        {
            currmax=max(x,currmax+x);
            maxsum=max(currmax,maxsum);

            currmin=min(x,currmin+x);
            minsum=min(currmin,minsum);

            totalsum+=x;

        }

        if(maxsum<0)
        {
            return maxsum;
        }

        return max(maxsum,totalsum-minsum);
    }
};