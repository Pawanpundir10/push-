class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(),folder.end());
        vector<string>res;
        int n=folder.size();

        res.push_back(folder[0]);

        for(int i=1;i<n;i++)
        {
            string currfolder=folder[i];
            string prevfolder=res.back();
            prevfolder+='/';

            if(currfolder.find(prevfolder) != 0)
            {
                res.push_back(currfolder);
            }
        }

        return res;
    }
};