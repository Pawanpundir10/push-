class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char>s1;
        stack<char>s2;
        int val=0;
        int i=0;
        if(x>y)
        {
         for(char c:s)
         {
            if(!s1.empty()&& s1.top()=='a' && c=='b')
            {
              s1.pop();
              val+=x;
            }
            else{
                s1.push(c);
            }
            i++;
         }
            while(!s1.empty())
            {
                char c=s1.top();
                s1.pop();
                if(!s2.empty() && s2.top()=='a' && c=='b')
                {
                s2.pop();
              val+=y;
                }
                else
                {
                    s2.push(c);
                }

            }
         }
        else
        {
          for(char c:s)
         {
            if(!s1.empty()&& s1.top()=='b' && c=='a')
            {
              s1.pop();
              val+=y;
            }
            else{
                s1.push(c);
            }
            i++;
         }
            while(!s1.empty())
            {
                char c=s1.top();
                s1.pop();
                if(!s2.empty() && s2.top()=='b' && c=='a')
                {
                s2.pop();
              val+=x;
                }
                else
                {
                    s2.push(c);
                }

            }  
        }

        return val;
    }
};