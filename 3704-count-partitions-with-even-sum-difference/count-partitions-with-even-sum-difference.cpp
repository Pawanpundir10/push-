class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        if(n==0) return 0;
        vector<int>sufsum(n);
        sufsum[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            sufsum[i]=sufsum[i-1]+nums[i];
        }

        for(int i=0;i<n-1;i++)
        {
            int a=sufsum[i];
            int b=sufsum[n-1]-a;
            int c=abs(b-a);
            if(c%2==0) count++;
        }

        return count;
    }
};