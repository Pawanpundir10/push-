class Solution {
public:

    bool isvowel(char c)
    {
        return (c=='a' ||c=='e' ||c=='i' ||c=='o' ||c=='u' ||
        c=='A' ||c=='E' ||c=='I' ||c=='O' ||c=='U');
        
    }

    bool doesAliceWin(string s) {
        int count=0;
        for(char ch:s)
        {
            if(isvowel(ch))
            {
                count++;
            }
        }

        return count==0?false:true;
    }
};