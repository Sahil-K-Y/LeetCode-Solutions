class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>q;
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<k;i++){
            while(q.size()>0 && nums[q.back()]<=nums[i]){
                q.pop_back();
            }
            q.push_back(i);
        }
        for(int i=k;i<n;i++){
            ans.push_back(nums[q.front()]);
            while(q.size()>0 && q.front()<=i-k){
                q.pop_front();
            }
            while(q.size()>0 && nums[q.back()]<=nums[i]){
                q.pop_back();
            }
            q.push_back(i);
        }
        ans.push_back(nums[q.front()]);
        return ans;
    }
};
