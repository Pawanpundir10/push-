class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
     map<pair<int,int>,int>mp;

     for(auto &d:dominoes)
     {
        if(d[0]>d[1])
        {
            swap(d[0],d[1]);
        }
       mp[{d[0],d[1]}]++;
     }

     int res=0;
     for(auto &i:mp)
     {
        int n=i.second;
        res+= n*(n-1)/2;
     }














        // vector<int>ans(100);
        // int res=0;
        // for(auto &i:dominoes)
        // {
        //      if(i[0]>i[1])
        //      {
        //         swap(i[0],i[1]);
        //      }
        //      int num=i[0]*10+i[1];

        //      res+=ans[num];
        //      ans[num]++;
        // }

        return res;
    }
};