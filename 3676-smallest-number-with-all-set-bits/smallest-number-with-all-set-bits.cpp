class Solution {
public:
    int smallestNumber(int n) {
        vector<int>nums;
        for(int i=1;i<31;i++)
        {
            nums.push_back(pow(2,i)-1);
        }
         
        auto equalcheck=find(nums.begin(),nums.end(),n);
        if(equalcheck!=nums.end())
        {
        return *equalcheck;
        }
   
       auto it=*upper_bound(nums.begin(),nums.end(),n);
       return it;

    }
};