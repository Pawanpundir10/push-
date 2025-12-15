class Solution {
public:

   string convert(int num,int base)
   {
      string chars="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
      string ans="";

      while(num>0)
      {
        ans+=chars[num%base];
        num/=base;
      }

      reverse(ans.begin(),ans.end());

      return ans;
   }
    string concatHex36(int n) {
        int sq=n*n;
        int tri=n*n*n;

        string a=convert(sq,16);
        string b=convert(tri,36);

        return a+b;
    }
};