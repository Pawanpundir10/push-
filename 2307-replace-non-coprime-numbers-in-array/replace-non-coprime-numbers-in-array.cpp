class Solution {
public:
  
    vector<int> replaceNonCoprimes(vector<int>& nums) {
      vector<int>res;
      for(int num:nums)
      {
        while(!res.empty() && gcd(res.back(),num)>1)
        {
           long long clcm=lcm(res.back(),num);
           res.pop_back();
           num=clcm;
        }     
        res.push_back(num);  
        
      }
      
      return res;
    }
};