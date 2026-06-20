class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        int fresh=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                else if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        int ans=0;
        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, 1, -1};
        while(q.size()>0 && fresh>0){
            int sz=q.size();
            while(sz--){
                int i=q.front().first;
                int j=q.front().second;
                q.pop();
                for(int d=0;d<4;d++){
                    int nr=i+dx[d];
                    int nc=j+dy[d];
                    if(nr>=0&&nr<n&&nc>=0&&nc<m&&grid[nr][nc]==1){
                        grid[nr][nc]=2;
                        q.push({nr,nc});
                        fresh--;
                    }
                }
            }
            ans++;
        }
        return fresh==0?ans:-1;
    }
};
