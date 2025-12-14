class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length();

        if(t.length()>n) return "";

        unordered_map<char,int>mpp;
        for(char &ch:t)
        {
            mpp[ch]++;
        }
        int requiredcount=t.length();
        int minwindowsize=INT_MAX;
        int start_i=0;

        int i=0;
        int j=0;

        while(j<n)
        {
            char c=s[j];
            if(mpp[c]>0)
            {
                requiredcount--;
            }
            mpp[c]--;

            while(requiredcount==0)
            {
                int currsize=j-i+1;
                if(currsize < minwindowsize)
                {
                    minwindowsize=currsize;
                    start_i=i;
                }

                mpp[s[i]]++;

                if(mpp[s[i]]>0)
                {
                    requiredcount++;
                }

                i++;
                            
            }

            j++;
        }

        return minwindowsize==INT_MAX?"":s.substr(start_i,minwindowsize);
    }
};