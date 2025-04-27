class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=2;i<n;i++)
        {
            int a=nums[i-2];
            int b=nums[i-1];
            int c=nums[i];

            if((a+c)*2==b)
            {
                count++;
            }
        }
        return count;
    }
};