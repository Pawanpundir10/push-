class Solution {
public:
    long long count=0;
    long long numofzeroes=0;
    long long zeroFilledSubarray(vector<int>& nums) {
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