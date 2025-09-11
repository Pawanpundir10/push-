class Solution {
public:
    bool isVowel(char c) {
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
               c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
    }

    string sortVowels(string s) {
        vector<char>sorted;

        for(char it:s)
        {
            if(isVowel(it))
            {
                sorted.push_back(it);
            }
        }

        sort(sorted.begin(),sorted.end());

        int i=0;
        for(int j=0;j<s.size();j++)
        {
            if(isVowel(s[j]))
            {
                s[j]=sorted[i++];
            }
        }

        return s;

    }
};