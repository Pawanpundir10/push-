class Solution {
public:
    int minElement(vector<int>& nums) {
      int mini=INT_MAX;

      for(int c:nums)
      {
       if(c>=10)
       {
        string a=to_string(c);
        int sum=0;

        for(char ch:a)
        {
            sum+=ch-'0';
        }

        mini=min(mini,sum);
       }
       else{
        mini=min(mini,c);
       }
      }

      return mini;
    }
};