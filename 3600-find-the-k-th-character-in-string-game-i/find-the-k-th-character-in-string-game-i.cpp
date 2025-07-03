class Solution {
public:
   
   char solve(string word,int k)
   {
    if(k<word.length())
    {
        return word[k-1];
    }
    string nextword="";
    for(char c:word)
    {
          nextword+=(char)(c+1);
    }
    return solve(word+nextword,k);
   }



    char kthCharacter(int k) {
        return solve("a",k);

    }
};