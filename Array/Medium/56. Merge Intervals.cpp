class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        // int n=intervals.size();
        // for(int i=0;i<n;i++){
        //     int j=i;
        //     int end=intervals[i][1];
        //     while(j < n && end >= intervals[j][0]){
        //         end=max(end,intervals[j][1]);
        //         j++;
        //     }
        //     ans.push_back({intervals[i][0],end});
        //     i=j-1;
        // }
        //greedy
        for(auto &it:intervals){
            if(ans.empty()||ans.back()[1]<it[0]){
                ans.push_back(it);
            }else{
                ans.back()[1]=max(it[1],ans.back()[1]);
            }
        }
        return ans;
    }
};
