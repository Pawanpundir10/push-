class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        int a=1;
        while(a<=(n/2))
        {
            ans.push_back(a);
            ans.push_back(-a);
            a++;
        }
        if(n%2!=0)
        {
            ans.push_back(0);
        }

        return ans;
    }
};