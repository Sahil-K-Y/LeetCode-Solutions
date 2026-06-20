class Solution {
public:
    vector<vector<int>> adj;
    vector<int> state;   // 0 = unvisited, 1 = visiting, 2 = visited
    vector<int> order;
    bool cycle = false;

    void dfs(int node) {
        if (cycle) return;

        state[node] = 1; // visiting

        for (int next : adj[node]) {
            if (state[next] == 0) {
                dfs(next);
            } 
            else if (state[next] == 1) {
                cycle = true; // cycle detected
                return;
            }
        }

        state[node] = 2; // visited
        order.push_back(node);
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        adj.resize(numCourses);
        state.assign(numCourses, 0);

        // Build graph
        for (auto &p : prerequisites) {
            adj[p[1]].push_back(p[0]);
        }

        // Run DFS
        for (int i = 0; i < numCourses; i++) {
            if (state[i] == 0) {
                dfs(i);
            }
        }

        if (cycle) return {};

        reverse(order.begin(), order.end());
        return order;
    }
};