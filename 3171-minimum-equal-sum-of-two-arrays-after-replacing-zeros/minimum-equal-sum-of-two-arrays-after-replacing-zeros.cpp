class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long count1=0;
        long long count2=0;
        long long sum1=0;
        long long sum2=0;
        for(int i=0;i<nums1.size();i++)
        {
    
            if(nums1[i]==0)
            {
                count1++;
                nums1[i]=1;
            }
            sum1+=nums1[i];
        }
        for(int j=0;j<nums2.size();j++)
        {
            if(nums2[j]==0)
            {
                count2++;
                nums2[j]=1;
            }
            sum2+=nums2[j];
        } 

        if(sum1<sum2 && count1==0)  return -1;
        
        if(sum2<sum1 && count2==0)    return -1;
        
 
        return max(sum1,sum2);

         }
};