class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long ans=0;
        int i=0;
        long long sum=0;
        int n=nums.size();
        for(int j=0;j<n;j++)
        {
            sum+=nums[j];
            while(sum*(j-i+1)>=k)
            {
               sum-=nums[i];
               i++;
            }

            ans+=(j-i+1);
        }


        // while(j<n)
        // {
        //     sum+=nums[j];
        //     if((sum*mul)<k)
        //     {
        //         ans++;
        //         j++;
        //         mul++;
        //     }
        //     else{
        //         sum-=nums[i];
        //         mul=1;
        //         i++;
        //         j++;
        //     }

        // }
        return ans;
    }
};