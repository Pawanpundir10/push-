class Solution {
public:
    int secondHighest(string s) {
        int maxi=-1;
        int second_max=-1;
        for(char c:s)
        {
            if(isdigit(c))
            {
                maxi=max(maxi,c-'0');
            }
        }

        for(char c:s)
        {
            if(isdigit(c))
            {
                int a =c-'0';
                if(maxi>a)
                {
                    second_max=max(second_max,a);
                }
            }
        }

        return second_max;
    }
};