class Solution {
public:
    int maxDifference(string s) {
        int oddcount = INT_MIN;
        int evencount = INT_MAX;
        unordered_map<char,int>mpp;

        for(auto ch:s)
        {
            mpp[ch]++;
        }

        for(auto &it:mpp)
        {
            if(it.second%2!=0)
            {
                oddcount=max(oddcount,it.second);
            }
            else
            {
            evencount=min(evencount,it.second);
            }

        }
    
        return oddcount-evencount;
    }
};