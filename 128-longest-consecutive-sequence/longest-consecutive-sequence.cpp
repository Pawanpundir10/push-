class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        unordered_set<int>s;
   
        s.insert(nums.begin(),nums.end());
        int longest=1;
        for(auto it:s)
        {
            if(s.find(it-1)==s.end())
            {
                int cnt=1;
                int x=it;
            while(s.find(x+1)!=s.end())
            {
                x++;
                cnt++;
            }

            longest=max(cnt,longest);
        }
        }

        return longest;
    }
};