class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
           
            if(nums[i]==1){
                 int fre=0;
                int j=i+1;
                while(j<n && nums[j]!=1){
                    fre++;
                    j++;
                }
                if (j < n) {
                    if (fre < k) return false;
                }
                i=j-1;
            }
        }
        return true;
    }
};
