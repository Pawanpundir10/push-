class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxi=*max_element(nums.begin(),nums.end());
        int i=0;
        long long count=0;
        int maxfound=0;
        int n=nums.size();

        for(int j=0;j<n;j++)
        {
            if(nums[j]==maxi) maxfound++;

            while(maxfound>=k)
            {
                count+=n-j;
                if(nums[i]==maxi)
                {
                maxfound--;
                }
                i++;

            }
        }

        return count;
    }
};