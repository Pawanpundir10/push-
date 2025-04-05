class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int>ans;

        unordered_map<int,int>mpp;
        for(int num:nums)
        {
            mpp[num]++;
        }

        for(auto &a:mpp)
        {
            int num=a.first;
            if(a.second==1 && mpp.find(num-1)==mpp.end() && mpp.find(num+1)==mpp.end())
            {
                ans.push_back(num);
            }
        }

        return ans;
    }
};