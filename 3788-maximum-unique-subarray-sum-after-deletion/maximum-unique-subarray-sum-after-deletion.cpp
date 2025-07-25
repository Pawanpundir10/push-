class Solution {
public:
    int maxSum(vector<int>& nums) {
      bool negative=true;
      int maxval=INT_MIN;

      for(int n:nums)
      {
        if(n>=0) negative=false;
        if(n>maxval) maxval=n;
      } 

      if(negative)
      {
        return maxval;
      }

      unordered_set<int>unique(nums.begin(),nums.end());
      int sum=0;
      for(auto i:unique)
      {
        if(i>0)
        {
           sum+=i;
        }
      }

      return sum; 
    }
};