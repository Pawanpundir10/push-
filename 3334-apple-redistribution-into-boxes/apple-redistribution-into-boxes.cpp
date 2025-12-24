class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum1=accumulate(apple.begin(),apple.end(),0);

        sort(capacity.rbegin(),capacity.rend());
        int sum2=0;
        int count=1;
        for(int i=0;i<capacity.size();i++)
        {
            sum2+=capacity[i];
            if(sum1>sum2)
            {
                count++;
            }
            else
            {
                return count;
            }
        }

        return -1;
    }
};