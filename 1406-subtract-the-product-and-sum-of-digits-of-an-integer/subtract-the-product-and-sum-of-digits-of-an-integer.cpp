class Solution {
public:
    int subtractProductAndSum(int n) {
        string num=to_string(n);
        int product=1;
        int sum=0;
        for(int i=0;i<num.length();i++)
        {
            product*=(num[i]-'0');
            sum+=(num[i]-'0');
        }

        return (product-sum);

    }
};