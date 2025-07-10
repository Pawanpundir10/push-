class Solution {
public:
   
   vector<int> findpositions(vector<int>& nums, int target)
   {
    vector<int>ans={-1,-1};

    auto low=lower_bound(nums.begin(),nums.end(),target);
    auto up=upper_bound(nums.begin(),nums.end(),target);

    if(low==nums.end() || *low!=target)
    {
        return ans;
    }

    int first=low-nums.begin();
    int last=up-nums.begin()-1;

    ans[0]=first;
    ans[1]=last;

    return ans;

   }


    vector<int> searchRange(vector<int>& nums, int target) {
        return findpositions(nums,target);
    }
};