class Solution {
public:
    string triangleType(vector<int>& nums) {
       string res="none";
       int count=1;
       sort(nums.begin(),nums.end());
       if(nums[0]+nums[1]>nums[2])
       {
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]==nums[i])
            {
                count++;
            }
        }
        if(count==3)
        {
            res="equilateral";
        }
        else if(count==2)
        {
            res="isosceles";
        }
        else res="scalene";
       }
return res;
    }
};