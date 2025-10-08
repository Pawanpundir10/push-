class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>ans;
        sort(potions.begin(),potions.end());
        for(int spell:spells)
        {
            long long target=(success+spell-1)/spell;
            auto lb=lower_bound(potions.begin(),potions.end(),target);
            int count=potions.end()-lb;
            ans.push_back(count);
        }


        return ans;
        

    }
};