class Solution {
public:
   vector<vector<int>>result;
   void backtrack(vector<int>& candidates, int target,vector<int>curr,int currsum,int idx)
   {
      if(currsum==target)
      {
              result.push_back(curr);
              return;
      }


      if(currsum>target)
      {
        return;
      }

      for(int i=idx;i<candidates.size();i++)
      {
        int num=candidates[i];
        curr.push_back(num);
        currsum+=num;

        backtrack(candidates,target,curr,currsum,i);

        curr.pop_back();
        currsum-=num;

      }
   }

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<int>curr;

        backtrack(candidates,target,curr,0,0);

        return result;
    }
};