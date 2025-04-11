class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mpp;
        unordered_set<int>seen;

        for(int num:arr)
        {
            mpp[num]++;
        }

        for(auto i:mpp)
        {
            if(seen.find(i.second)!=seen.end())
            {
                return false;
            }
            seen.insert(i.second);
        }

        return true;
    }
};