class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    int i=0;
    int j=0;
    int n=g.size();
    int m=s.size();
    int ans=0;
    while(j<m && i<n)
    {
    if(g[i]>s[j])
    {
        j++;
    }
    else
    {
        ans++;
        i++;
        j++;
    }
    }

    return ans;
    }
};