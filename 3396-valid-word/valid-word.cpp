class Solution {
public:
    bool isValid(string word) {
        int char_count=0;
        int vowel_count=0;
        int consonant_count=0;
        int n=word.length();
        for(int i=0;i<n;i++)
        {
            if((!isalpha(word[i])) && (!isdigit(word[i])))
            {
                return false;
            }
            if(isalpha(word[i]))
            {
                char ch=tolower(word[i]);
                if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                {
                    vowel_count++;
                }
                else{
                    consonant_count++;
                }
            }
        }

        if(n>=3 && vowel_count>=1 && consonant_count>=1)
        {
            return true;
        }

        return false;
    }
};