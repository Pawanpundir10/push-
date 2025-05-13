class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
      const int M = 1e9 + 7;  
    //   unordered_map<char,int>mpp;
    vector<int>mpp(26,0);
      for(char &ch:s)
      {
        mpp[ch-'a']++;
      }
      while(t-->0)
      {
        // unordered_map<char,int>tpp;
        vector<int>tpp(26,0);
        for(int i=0;i<26;i++)
        {
            char c=i+'a';
            int freq=mpp[i];

            if(c!='z')
            {
                tpp[(c+1)-'a']=(tpp[(c+1)-'a']+freq)%M;
            }
            else
            {
                tpp['a'-'a']=(tpp['a'-'a']+freq)%M;
                tpp['b'-'a']=(tpp['b'-'a']+freq)%M;
            }
        }
        mpp=move(tpp);
      }
      int res=0;
      for(int i=0;i<26;i++)
      {
        res=(res+mpp[i])%M;
      }

      return res;

    }
};