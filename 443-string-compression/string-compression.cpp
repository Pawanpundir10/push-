class Solution {
public:
    int compress(vector<char>& chars) {
    int k=0;
    int i=0;
      while(i<chars.size())
      {
        char c=chars[i];
        int j=i;
        while(j<chars.size() && chars[j]==c)
        {
            j++;
        }
        int count=j-i;
        chars[k++]=c;
        if(count>1)
        {
            string num=to_string(count);
            for(char ch:num)
            {
                chars[k++]=ch;
            }
        }

        i=j;

      }  

      return k;
    }
};