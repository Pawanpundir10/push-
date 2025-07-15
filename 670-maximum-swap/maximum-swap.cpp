class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        int n=s.length();
        int left=-1;
        int right=-1;
        int maxdigitind=n-1;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]>s[maxdigitind])
            {
                maxdigitind=i;
            }
            else if(s[i]<s[maxdigitind])
            {
                left=i;
                right=maxdigitind;
            }
        }

        if(left!=-1)
        {
            swap(s[left],s[right]);
        }

        return stoi(s);
    }
};