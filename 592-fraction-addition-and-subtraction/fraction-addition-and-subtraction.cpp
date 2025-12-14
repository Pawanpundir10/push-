class Solution {
public:
    string fractionAddition(string expr) {
        int num=0;
        int den=1;

        int i=0;
        int n=expr.size();

        while(i<n)
        {
            int curr_num=0;
            int curr_den=0;

            bool isneg = (expr[i]=='-');

            if(expr[i]=='+' || expr[i]=='-')
            { 
                i++;
            }

            while(i<n && isdigit(expr[i]))
            {
                int val= expr[i]-'0';
                curr_num= curr_num*10 + val;
                i++;
            }
            if(isneg)
            {
                curr_num*=-1;
            }
            i++;
            while(i<n && isdigit(expr[i]))
            {
                int val= expr[i]-'0';
                curr_den= curr_den*10 + val;
                i++;
            }
     
            num=num*curr_den + den*curr_num;
            den=curr_den*den;

        }

        int m=abs(__gcd(num,den));
        num/=m;
        den/=m;



        return to_string(num)+"/"+to_string(den);

    }
};