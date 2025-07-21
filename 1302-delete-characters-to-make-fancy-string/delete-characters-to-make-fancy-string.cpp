class Solution {
public:
    string makeFancyString(string s) {

        if(s.empty())
        {
            return "";
        }
        string res="";
        res+=s[0];
        int count=1;
        for(int i=1;i<s.length();i++)
        {
           if(s[i]==s[i-1])
           {
            count++;
           }
           else{
            count=1;
           }
           if(count<3)
           {
           res+=s[i];
           }
         
        }

        return res;
    }
};