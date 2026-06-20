class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n=arr.size();
        stack<int>s;
        vector<int>left(n),right(n);
        //left
        for(int i=0;i<n;i++){
            while(!s.empty() && arr[s.top()]>=arr[i]){
                s.pop();
            }
            left[i]=s.empty()?-1:s.top();
            s.push(i);
        }
        while(!s.empty()){
            s.pop();
        }
        //right
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && arr[s.top()]>=arr[i]){
                s.pop();
            }
            right[i]=s.empty()?n:s.top();
            s.push(i);
        }
        //area
        int ans=0;
        for(int i=0;i<n;i++){
            int wt=right[i]-left[i]-1;
            int curr=arr[i]*wt;
            ans=max(curr,ans);
        }
        return ans;
    }
};
