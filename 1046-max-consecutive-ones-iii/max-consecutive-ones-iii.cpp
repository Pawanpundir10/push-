class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int n=nums.size();
        int count=INT_MIN;
        while(j<n)
        {
            if(nums[j]==0) k--;

            while(k<0)
            {
                if(nums[i]==0)
                {
                    k++;
                }
                i++;
            }

            count=max(count,j-i+1);
            j++;
        }

        return count;
    }
};