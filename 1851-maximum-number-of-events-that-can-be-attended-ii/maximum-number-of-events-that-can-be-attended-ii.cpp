class Solution {
public:
    int n;
    vector<vector<int>> t;

    int solve(vector<vector<int>>& events, vector<int>& startTimes, int i, int k) {
        if (k == 0 || i == n)
            return 0;

        if (t[i][k] != -1)
            return t[i][k];

        int skip = solve(events, startTimes, i + 1, k);
        int nextIndex = lower_bound(startTimes.begin(), startTimes.end(), events[i][1] + 1) - startTimes.begin();
        int take = events[i][2] + solve(events, startTimes, nextIndex, k - 1);

        return t[i][k] = max(skip, take);
    }

    int maxValue(vector<vector<int>>& events, int k) {
        sort(events.begin(), events.end());
        n = events.size();

        vector<int> startTimes(n);
        for (int i = 0; i < n; i++) {
            startTimes[i] = events[i][0];
        }

        t.resize(n, vector<int>(k + 1, -1));
        return solve(events, startTimes, 0, k);
    }
};
