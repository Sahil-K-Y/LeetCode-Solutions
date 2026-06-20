class Solution {
public:
    bool helper(TreeNode* root,TreeNode* min,TreeNode*max){
        if(root==nullptr){
            return true;
        }
        if(min!=nullptr && root->val<=min->val){
            return false;
        }
        if(max!=nullptr&&root->val>=max->val){
            return false;
        }
        return helper(root->left,min,root)&&helper(root->right,root,max);
    } 
    bool isValidBST(TreeNode* root) {
        return helper(root,nullptr,nullptr);
    }
};
