class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int n=nums.size();
        int sum=0;
        int rem;
        int count=0;
        mpp[0]=1;
        for(int x:nums)
        {
            sum+=x;
            rem=sum%k;

            if(rem<0)
            {
                rem+=k;
            }

            
            count+=mpp[rem];
            

            mpp[rem]++;

        }

        return count;
    }
};