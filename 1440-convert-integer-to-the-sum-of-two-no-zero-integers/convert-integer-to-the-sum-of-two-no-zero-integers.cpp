class Solution {
public:
bool has0(int x)
{
    if(x==0)return true;
    while(x!=0)
    {
        if(x%10==0)return true;
        x=x/10;
    }
    return false;
}


    vector<int> getNoZeroIntegers(int n) {
        int a=1;
        while(a<n)
        {
           int b=n-a;
           if(!has0(a) && !has0(b))
           {
            return {a,b};
           }
           a++;
        }

        return {};
    }

};