class Solution {
public:
    int M=1e9+7;
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<int>result;
        vector<int>power;

        for(int i=0;i<32;i++)
        {
            if((n & (1<<i)) != 0) //ith bit is set or not
            power.push_back(1<<i); //2powi can be represent like this
        }

        for(auto &query:queries)
        {
            int left=query[0];
            int right=query[1];
            long product=1;

            for(int i=left;i<=right;i++)
            {
                product=(product*power[i])%M;
            }

            result.push_back(product);
        }

        return result;
    }
};