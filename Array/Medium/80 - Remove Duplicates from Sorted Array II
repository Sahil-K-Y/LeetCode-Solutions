class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int index=1;
        int pre=nums[0];
        int count=1;
        for(int i=1;i<n;i++){
            if(nums[i]==pre&&count<2){
                count++;
                nums[index]=nums[i];
                index++;
            }else if(nums[i]!=pre){
                nums[index]=nums[i];
                index++;

                pre=nums[i];
                count=1;
            }
        }
        return index;
    }
};
