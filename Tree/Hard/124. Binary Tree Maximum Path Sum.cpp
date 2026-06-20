class Solution {
public:
    int ans=INT_MIN;
    int dfs(TreeNode* root){
        if(!root){
            return 0;
        }
        int lt=max(0,dfs(root->left));
        int rt=max(0,dfs(root->right));
        ans=max(ans,root->val+lt+rt);
        return root->val+max(lt,rt);
    }
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
