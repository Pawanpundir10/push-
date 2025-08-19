class Solution {
public:
    
    long long zeroFilledSubarray(vector<int>& nums) {
    long long count=0;
    long long numofzeroes=0;
     for(int i=0;i<nums.size();i++)
     {
        if(nums[i]==0){
            numofzeroes++;
            count+=numofzeroes;
        }
        else{
        numofzeroes=0;  
        }
     }

     return count;
    }
};