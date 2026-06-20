class Solution {
public:
    void inorder(TreeNode* root,vector<int>&val){
        if(!root){
            return;
        }
        inorder(root->left,val);
        val.push_back(root->val);
        inorder(root->right,val);
    }
    int minDiffInBST(TreeNode* root) {
        vector<int>val;
        inorder(root,val);
        int ans=INT_MAX;
        for(int i=1;i<val.size();i++){
            ans=min(ans,abs(val[i]-val[i-1]));
        }
        return ans;
    }
};
