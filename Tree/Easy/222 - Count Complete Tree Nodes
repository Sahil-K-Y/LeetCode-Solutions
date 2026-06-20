class Solution {
public:
    int count(TreeNode*root){
        if(!root){
            return 0;
        }
        int lt=count(root->left);
        int rt=count(root->right);
        return 1+lt+rt;
    }
    int countNodes(TreeNode* root) {
        return count(root);
    }
};
