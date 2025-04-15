class Solution {
public:
     bool isvowel(char c)
       {
        c=tolower(c);
        return (c=='a' ||c=='e' ||c=='i' ||c=='o' ||c=='u' );
       } 

    string reverseVowels(string s) {
     int i=0;
     int n=s.length();
     while(i<n)
     {
        if(!isvowel(s[i]))
        {
            i++;
        }
        else if(!isvowel(s[n]))
        {
            n--;
        }
        else{
            swap(s[i],s[n]);
            i++;
            n--;
        }
     }
     return s;
    }
};