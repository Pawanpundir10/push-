class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxsum=0;
        int minsum=0;
        int currmax=0;
        int currmin=0;

        for(int x:nums)
        {
            currmax=max(x,currmax+x);
            maxsum=max(maxsum,currmax);

            currmin=min(x,currmin+x);
            minsum=min(currmin,minsum);

        }

        return max(maxsum,abs(minsum));

    }
};