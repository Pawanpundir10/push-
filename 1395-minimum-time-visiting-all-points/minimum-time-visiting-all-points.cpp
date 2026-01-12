class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int sum=0;
        int maxi=0;
        for(int i=1;i<points.size();i++)
        {
            int a=points[i][0];
            int b=points[i][1];

            maxi= max(abs(a-points[i-1][0]),abs(b-points[i-1][1]));

            sum+=maxi;
        }

        return sum;
    }
};