class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {

       priority_queue<int>maxi;
       int val=0;
       for(auto s:piles)
       {
        maxi.push(s);
       }
        while(k--)
        {
        int temp=((maxi.top())+1)/2;
        maxi.pop();
        maxi.push(temp);
        if(k==0)
        {
            break;
        }
       }
      while(maxi.size()>0)
      {
        val+=maxi.top();
        maxi.pop();
      }
    return val;
    }
};