class Solution {
public:
    long long flowerGame(int n, int m) {
        long long oddcountn=(n+1)/2;
        long long evencountn=n/2;
        long long oddcountm=(m+1)/2;
        long long evencountm=m/2;

        long long ans=oddcountn*evencountm + evencountn*oddcountm;

        return ans;
    }
};