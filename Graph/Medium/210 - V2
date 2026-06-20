class Solution {
public:
    bool dfs(int src,vector<bool>&vis,vector<bool>&path,vector<vector<int>>& edge){
        vis[src]=true;
        path[src]=true;
        for(int i=0;i<edge.size();i++){
            int v=edge[i][0];
            int u=edge[i][1];
            if(src==u){
                if(!vis[v]){
                    if(dfs(v,vis,path,edge)){
                        return true;
                    }
                }else if(path[v]){
                    return true;
                }
            }
        }
        path[src]=false;
        return false;
    }
    void topological(int src,vector<bool>&vis,stack<int>&st,vector<vector<int>>& edge){
        vis[src]=true;
        for(int i=0;i<edge.size();i++){
            int v=edge[i][0];
            int u=edge[i][1];
            if(src==u){
                if(!vis[v]){
                    topological(v,vis,st,edge);
                }
            }
        }
        st.push(src);
    }
    vector<int> findOrder(int n, vector<vector<int>>& edge) {
        vector<bool>vis(n,false);
        vector<bool>path(n,false);
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(dfs(i,vis,path,edge)){
                    return ans;
                }
            }
        }
        stack<int>st;
        vis.assign(n,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                topological(i,vis,st,edge);
            }
        }
        while(st.size()>0){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};
