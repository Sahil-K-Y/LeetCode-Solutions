class Solution {
public:
    void subset(vector<int>&nums,vector<int>&data,vector<vector<int>>&ans,int i){
        if(i==nums.size()){
            ans.push_back(data);
            return;
        }
        data.push_back(nums[i]);
        subset(nums,data,ans,i+1);
        data.pop_back();
        int j=i+1;
        while(j<nums.size() && nums[j]==nums[i]){
            j++;
        }
        subset(nums,data,ans,j);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>data;
        vector<vector<int>>ans;
        subset(nums,data,ans,0);
        return ans;
    }
};
