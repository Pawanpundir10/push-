class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto low=lower_bound(nums.begin(),nums.end(),target);
        if(low==nums.end())
        {
            return nums.size();
        }

        int first=low-nums.begin();

        return first;
    }
};