class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.size();
        int charinsection=2*(numRows-1);
        string ans;
        if(numRows==1) return s;

        for(int curr=0;curr<numRows;curr++)
        {
             int index=curr;

             while(index<n)
             {
                ans+=s[index];
                if(curr!=0 && curr!=numRows-1)
                {
                    int charinbetween=charinsection-2*(curr);
                    int  secondindex=index+charinbetween;
                    if(secondindex<n)
                    {
                        ans+=s[secondindex];
                    }
                }

                index+=charinsection;
             }
        }

        return ans;
    }
};