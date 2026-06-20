class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>peak;
        int ans=0;
        int curr=0;
        for(int i=0;i<gain.size();i++){
            curr+=gain[i];
            ans=max(ans,curr);
        }
        return ans;
    }
};