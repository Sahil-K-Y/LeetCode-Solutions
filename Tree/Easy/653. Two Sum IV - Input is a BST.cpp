class Solution {
public:
    void dfs(TreeNode* root,vector<int>&v){
        if(!root){
            return;
        }
        dfs(root->left,v);
        v.push_back(root->val);
        dfs(root->right,v);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>val;
        dfs(root,val);
        int i=0;
        int j=val.size()-1;
        while(i<j){
            if(val[i]+val[j]==k){
                return true;
            }else if((val[i]+val[j])>k){
                j--;
            }else{
                i++;
            }
        }
        return false;
    }
};
