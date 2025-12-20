class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        int maxi=0;
        int currsum=0;
        mpp[0]=-1;

        for(int i=0;i<n;i++)
        {
           currsum+= (nums[i]==1)?1:-1;

           if(mpp.find(currsum)!=mpp.end())
           {
            maxi=max(maxi,i-mpp[currsum]);
           }
           else
           {
            mpp[currsum]=i;
           }
        }

        
       return maxi; 
        
    }
};