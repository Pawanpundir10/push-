class Solution {
public:

   bool check(vector<int>& tasks, vector<int>& workers, int pills, int strength,int mid)
   {
    int pillsused=0;
    multiset<int>st(workers.begin(),workers.begin()+mid);
    for(int i=mid-1;i>=0;i--)
    {
        int req=tasks[i];
        auto it=prev(st.end());

        if(*it>=req)
        {
            st.erase(it);
        }
        else if(pillsused>=pills)
        {
            return false;
        }
        else
        {
            auto weakestworker=st.lower_bound(req-strength);
            if(weakestworker==st.end())
            {
                return false;
            }
            st.erase(weakestworker);
            pillsused++;
        }
    }

    return true;
   }



    int maxTaskAssign(vector<int>& tasks, vector<int>& workers, int pills, int strength) {
        int n=workers.size();
        int m=tasks.size();

        int l=0;
        int r=min(n,m);

        sort(tasks.begin(),tasks.end());
        sort(workers.begin(),workers.end(),greater<int>());

        int result=0;

        while(l<=r)
        {
            int mid=(l+r)/2;
            if(check(tasks,workers,pills,strength,mid))
            {
               result=mid;
               l=mid+1;
             }
             else
             {
                r=mid-1;
             }
    }
    return result;

    }
};