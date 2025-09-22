class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int>freq(101,0);
        for(auto a:nums)
        {
            freq[a]++;
        }
        
        int maxi=*max_element(freq.begin(),freq.end());
        int sum=0;
        for(auto i:freq)
        {
            if(i==maxi)
            {
               sum+=i;
            }
        }

        return sum;
    }
};