class Solution {
public:
    string largestGoodInteger(string num) {
       string maxgood="";
       for(int i=0;i<num.length();i++)
       {
        if(num[i]==num[i+1]&& num[i]==num[i+2])
        {
            string good=num.substr(i,3);
            if(good>maxgood)
            {
                maxgood=good;
            }
        }
       } 
       return maxgood;
    }
};