class Solution {
public:
    int maximumSum(vector<int>& arr) {
       int keep=arr[0];
       int del=0;
       int maxi=arr[0];

        for(int i=1;i<arr.size();i++)
        {
            del=max(del+arr[i],keep);
            keep=max(keep+arr[i],arr[i]);

            maxi=max({maxi,keep,del});
        }


        return maxi;
        
    }
};