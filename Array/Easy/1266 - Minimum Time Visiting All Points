class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& nums) {
        int ans=0;
        for(int i=0;i<nums.size()-1;i++){
            ans+=max(abs(nums[i][0]-nums[i+1][0]),abs(nums[i][1]-nums[i+1][1]));
        }
        return ans;
    }
};
