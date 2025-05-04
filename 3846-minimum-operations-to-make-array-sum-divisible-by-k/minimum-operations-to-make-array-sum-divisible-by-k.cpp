class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int ans=0;
        if(sum<k)
        {
            return sum;
        }
        while(!(sum%k)==0)
        {
            sum--;
            ans++;
        }
        return ans;
    }
};