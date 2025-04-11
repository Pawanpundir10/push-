class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0;
        int j=0;
        int maxi=INT_MIN;
        int vowelcount=0;
        while(j<s.length())
        {
            if(s[j]=='a' ||s[j]=='e' ||s[j]=='i' ||s[j]=='o' ||s[j]=='u')
            {
            vowelcount++;
            }
            if(j-i+1<k)
            {
             j++;
            }
            else if(j-i+1==k)
            {
             maxi=max(maxi,vowelcount);
            if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u')
            {
            vowelcount--;
            }
             i++;
             j++;
            }
        }

        return maxi;
    }
};