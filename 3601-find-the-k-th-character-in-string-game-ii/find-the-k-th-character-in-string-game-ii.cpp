class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
        if(k==1)
        {
            return 'a';
        }

        long long len=1;
        long long n=operations.size();
        int optype;
        long long new_k;
        for(int i=0;i<n;i++)
        {
            len*=2;
            if(len>=k)
            {
               optype=operations[i];
               new_k=k-(len/2);
               break;
            }
        }

        char c=kthCharacter(new_k,operations);

        if(optype==0)
        {
            return c;
        }
        
        return c=='z'?'a':c+1;
    }
};