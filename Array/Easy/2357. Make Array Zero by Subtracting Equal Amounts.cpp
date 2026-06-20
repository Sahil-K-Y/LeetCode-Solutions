class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int>uni;
        for(int i:nums){
            if(i>0)uni.insert(i);
        }
        return uni.size();
    }
};
