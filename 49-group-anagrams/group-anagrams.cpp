class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>s;
        for(auto str:strs)
        {
            string p=str;
            sort(p.begin(),p.end());

            s[p].push_back(str);
        }

        vector<vector<string>>ans;
        for(auto &i:s)
        {
            ans.push_back(i.second);
        }

        return ans;
    }
};