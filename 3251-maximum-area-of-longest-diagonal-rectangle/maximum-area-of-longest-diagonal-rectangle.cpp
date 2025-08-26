class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int ans = INT_MIN;
        int maxDiag = INT_MIN;

        for (auto it : dimensions) {
            int diag = it[0]*it[0] + it[1]*it[1];  
            int area = it[0] * it[1];

            if (diag > maxDiag) {
                maxDiag = diag;
                ans = area;
            } 
            else if (diag == maxDiag) {
                ans = max(ans, area);
            }
        }

        return ans;
    }
};
