class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxlen=1;
        int i=0;
        int n=fruits.size();
        unordered_map<int,int>mpp;
        int j=0;
        while(j<n)
        {
            mpp[fruits[j]]++;

            while(mpp.size()>2)
            {
                mpp[fruits[i]]--;
                if(mpp[fruits[i]]==0)
                mpp.erase(fruits[i]);

                i++;
            }

            if(mpp.size()<=2)
            {
                maxlen=max(maxlen,j-i+1);
            }

            j++;
        }

        return maxlen;
    }
};