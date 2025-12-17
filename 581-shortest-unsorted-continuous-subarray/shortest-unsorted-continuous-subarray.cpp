class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
       int n=nums.size();

       int start=-1;
       int end=-1;

       int maxseen=INT_MIN;
       int minseen=INT_MAX;


        //left to right
       for(int i=0;i<n;i++)
       {
           if(nums[i]<maxseen)
           {
            end=i;
           }
           else{
           maxseen=nums[i];
           }
       } 

       //right to left
       for(int i=n-1;i>=0;i--)
       {
         if(nums[i]>minseen)
         {
            start=i;
         }
         else
         {
         minseen=nums[i];
         }
       }

       if(start==-1) return 0;

       return end-start+1;
    }
};