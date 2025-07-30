class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max_and_val=*max_element(nums.begin(),nums.end());
        int currlen=0;
        int maxlen=0;
        for(int num:nums)
        {
           if(num==max_and_val)
           {
            currlen++;
           }
           else
           {
            maxlen=max(currlen,maxlen);
            currlen=0;
           }
        }

        int ans=max(currlen,maxlen);

        return ans;

    }
};