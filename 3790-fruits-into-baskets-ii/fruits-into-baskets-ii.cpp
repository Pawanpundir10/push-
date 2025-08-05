class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=baskets.size();
        vector<bool>basket_used(n,false);
        int unplaced_fruit=0;

        for(int fruit:fruits)
        {
            bool fruit_placed=false;

            for(int j=0;j<n;j++)
            {
                if(!basket_used[j] && baskets[j]>=fruit)
                {
                    basket_used[j]=true;
                    fruit_placed=true;
                    break;
                }
            }

            if(!fruit_placed)
            {
                unplaced_fruit++;
            }
        }

        return unplaced_fruit;
    }
};