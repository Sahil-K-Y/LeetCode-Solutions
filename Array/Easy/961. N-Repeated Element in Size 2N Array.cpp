class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int size=nums.size();
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        int fre=0,ans=0;
        for(auto it:mp){
            fre=max(fre,it.second);
        }
        for(auto i:mp){
            if(i.second==fre){
                ans=i.first;
            }
        }
        return ans;
    }
};
