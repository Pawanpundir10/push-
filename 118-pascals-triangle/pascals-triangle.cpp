class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>traingle;
        for(int i=0;i<numRows;i++)
        {
            vector<int>currrow;
            for(int j=0;j<=i;j++)
            {
                if(j==0 || j==i)
                {
                    currrow.push_back(1);
                }
                else
                {
                    int element=traingle[i-1][j-1]+traingle[i-1][j];
                    currrow.push_back(element);
                }
            }
            traingle.push_back(currrow);
        }

        return traingle;
    }
};