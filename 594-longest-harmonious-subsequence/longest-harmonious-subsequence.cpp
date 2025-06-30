class Solution {
public:
    int findLHS(vector<int>& nums) {
        int result=0;
        unordered_map<int,int>mpp;
        for(int i:nums)
        {
           mpp[i]++;
        }
        for(int j:nums)
        {
            int minnum=j;
            int maxnum=j+1;

            if(mpp.count(maxnum))
            {
                result=max(result,mpp[minnum]+mpp[maxnum]);
            }
        }


        return result;
    }
};