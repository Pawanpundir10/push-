class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=high;
         
        while(low<=high)
        {
           long long mid=low+(high-low)/2;
           long long hour=0;

           for(auto pile:piles)
           {
            hour+=ceil((double)pile/mid);
           }

           if(hour<=h)
           {
            ans=mid;
            high=mid-1;
           }
           else
           {
            low=mid+1;
           }
        }

        return ans;

    }
};