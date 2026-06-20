class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0;
        int ans=0;
        while(i<n){
            ans+=nums[i];
            i+=2;
        }
        return ans;
    }
};
