class Solution {
public:
    string answerString(string word, int numFriends) {
        int n=word.length();
        if(numFriends==1)
        {
            return word;
        }
        string res;

        int possiblelength=n-(numFriends-1);

        for(int i=0;i<n;i++)
        {
            int cantake=min(possiblelength,n-i);
            res=max(res,word.substr(i,cantake));
        }


        return res;
    }
};