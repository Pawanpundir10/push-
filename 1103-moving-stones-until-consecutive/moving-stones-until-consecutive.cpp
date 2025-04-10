class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        vector<int>abc={a,b,c};
        sort(abc.begin(),abc.end());
        int maxi=abc[2]-abc[0]-2;
        int mini=0;
        int leftgap=abc[1]-abc[0];
        int rightgap=abc[2]-abc[1];
        if(leftgap==1 && rightgap==1)
        {
            mini=0;
        }
        else if(leftgap<=2 ||  rightgap<=2)
        {
            mini=1;
        }
        else
        {
            mini=2;
        }

        return {mini,maxi};

        
    }
};