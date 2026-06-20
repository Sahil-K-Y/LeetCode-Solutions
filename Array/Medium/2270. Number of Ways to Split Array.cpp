class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long total=0;
        int ans=0;
        for(int i:nums){
            total+=i;
        }
        long long ls=0;
        for(int i=0;i<nums.size()-1;i++){
            ls+=nums[i];
            long long rs=total-ls;
            if(ls>=rs){
                ans++;
            }
        }
        return ans;
    }
};
