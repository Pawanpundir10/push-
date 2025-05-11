class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int oddcount=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]%2==1)
            {
                oddcount++;
                if(oddcount==3)
                {
                    return true;
                }
            }
            else
            {
                oddcount=0;
            }
        }

        return false;
    }
};