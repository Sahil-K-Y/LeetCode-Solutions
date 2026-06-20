class Solution {
public:
    bool dfs(int u, vector<int>& state, vector<vector<int>>& adj) {
        state[u] = 1; // visiting

        for (int v : adj[u]) {
            if (state[v] == 1) 
                return true; // cycle found
            if (state[v] == 0 && dfs(v, state, adj))
                return true;
        }

        state[u] = 2; // processed
        return false;
    }

    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(n);
        for (auto &p : prerequisites)
            adj[p[1]].push_back(p[0]);

        vector<int> state(n, 0);

        for (int i = 0; i < n; i++) {
            if (state[i] == 0) {
                if (dfs(i, state, adj))
                    return false;
            }
        }
        return true;
    }
};
