class Solution {
public:
    void dfs(TreeNode* root, int k,vector<int>&v){
        if(!root){
            return;
        }
        if(v.size()==k){
            return;
        }
        dfs(root->left,k,v);
        v.push_back(root->val);
        dfs(root->right,k,v);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>val;
        dfs(root,k,val);
        return val[k-1];
    }
};
