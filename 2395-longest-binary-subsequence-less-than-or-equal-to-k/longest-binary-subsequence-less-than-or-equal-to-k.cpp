class Solution {
public:
    int longestSubsequence(string s, int k) {
        int n=s.length();

        long long powerval=1;
        int length=0;

        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='0')
            {
                length++;
            }
            else if(powerval <=k)
            {
                k-=powerval;
                length++;
            }
            if(powerval<=k)
            {
                powerval*=2;
            }
        }

        return length;
    }
};