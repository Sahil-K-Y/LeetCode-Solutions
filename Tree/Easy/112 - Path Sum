class Solution {
public:
    bool helper(TreeNode* root, int targetSum){
        if(!root){
            return false;
        }
        if (!root->left && !root->right) {
            return root->val == targetSum;
        }
        int rem= targetSum - root->val;
        return helper(root->left,rem)||helper(root->right,rem);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return helper(root,targetSum);
    }
};
