class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size()<k) return false;
        if(s.size() == k) return true;

        int count[26]={0};

        for(int i=0; i<s.size();i++)
        {
            count[s[i]-'a']++;
        }
        int oddCount = 0;
        for(int &i: count)
        {
            if(i % 2 != 0) oddCount++;
        }

        if(oddCount > k) return false;

        return true;
    }
};