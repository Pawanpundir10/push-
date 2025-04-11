class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
       for(int i=low;i<=high;i++)
       {
        string j=to_string(i);
        int n=j.length();
        if(n%2!=0)
        {
            continue;
        }
        int firsthalf=0;
        int secondhalf=0;
        for(int k=0;k<n/2;k++)
        {
            firsthalf=firsthalf+j[k]-'0';
        }
        for(int k=n/2;k<n;k++)
        {
            secondhalf=secondhalf+j[k]-'0';
        }

        if(firsthalf==secondhalf)
        {
            count++;
        }

       }

       return count;
    }
};