class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>seen;
        int i=0;
        int j=0;
        int n=s.size();
        int maxi=0;

        while(j<n)
        {
            while(seen.count(s[j]))
            {
                seen.erase(s[i]);
                i++;
            }

            seen.insert(s[j]);
            
            maxi=max(maxi,j-i+1);

            j++;

        }

        return maxi;
    }
};