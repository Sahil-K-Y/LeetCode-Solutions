class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        int i=0;
        int n=grid.size();
        int m=grid[0].size();
        int t=0;
        vector<int> ans;
        while(i<grid.size()){
            if(i%2==0){
                for(int j=0;j<m;j++){
                    if(t%2==0){
                    ans.push_back(grid[i][j]);
                    }
                    t++;
                }
            }
            else{
                for(int j=m-1;j>=0;j--){
                    if(t%2==0){
                        ans.push_back(grid[i][j]);
                    }
                    t++;
                }
            }
            i++;
        }
        return ans;
    }
};
