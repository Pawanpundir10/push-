class Solution {
public:
    vector<int> topologicalsort(unordered_map<int,vector<int>>adj,int n,vector<int>indegree)
    {
        vector<int>res;
        queue<int>que;

        int count=0;

        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0){
                count++; 
                res.push_back(i);
                que.push(i);
            }    
        }

        while(!que.empty())
        {
            int u=que.front();
            que.pop();

            for(int &v:adj[u])
            {
                indegree[v]--;
                if(indegree[v]==0)
                {
                    res.push_back(v);
                    que.push(v);
                    count++;
                }
            }
        }

        if(count==n) {return res;}


        return {};
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>>adj;

        vector<int>indegree(numCourses,0);

        for(auto &i:prerequisites)
        {
            int a=i[0];
            int b=i[1];

            adj[b].push_back(a);

            indegree[a]++;
        }

        return topologicalsort(adj,numCourses,indegree);
    }
};