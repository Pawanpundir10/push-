class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>temp;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            temp.push_back(arr[i]);
            if(arr[i]==0 && temp.size()<n)
            {
                temp.push_back(0);
            }
        }

        for(int i=0;i<n;i++)
        {
            arr[i]=temp[i];
        }
    }
};