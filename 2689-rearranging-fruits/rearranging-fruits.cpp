class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int,int>mpp;
        int mini=INT_MAX;
        for(auto &it:basket1)
        {
            mpp[it]++; 
            mini=min(mini,it);
        }
        for(auto &it:basket2)
        {
             mpp[it]--;
             mini=min(mini,it);
        }
        vector<int>finallist;
        for(auto it:mpp)
        {
            int count=it.second;
            int cost=it.first;

            if(count==0)
            {
                continue;
            }
            if(count%2!=0)
            {
                return -1;
            }
            for(int c=1;c<=abs(count)/2;c++)
            {
                finallist.push_back(cost);
            }
        }    

        nth_element(finallist.begin(),finallist.begin()+finallist.size()/2,finallist.end());
        long long res=0;

        for(int i=0;i<finallist.size()/2;i++)
        {
            res+=min(finallist[i],mini*2);
        }

        return res;
    }
};