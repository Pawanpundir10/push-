class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int>seen;
        int n=nums.size();
        int i=0;
        int j=0;
        int currsum=0;
        int sum=0;
        while(j<n)
        {
           while(seen.count(nums[j]))
           {
            seen.erase(nums[i]);
            currsum-=nums[i];
            i++;
           }
           seen.insert(nums[j]);
           currsum+=nums[j];
           sum=max(sum,currsum);

           j++;

        }

        return sum;
    }
};