class Solution {
public:
    void allpath(TreeNode*root,string curr,vector<string>&ans){
        if(root->left==nullptr && root->right==nullptr){
            ans.push_back(curr);
            return;
        }
        if(root->left){
            allpath(root->left,curr+"->"+to_string(root->left->val),ans);
        }
        if(root->right){
            allpath(root->right,curr+"->"+to_string(root->right->val),ans);
        }

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string path=to_string(root->val);
        allpath(root,path,ans);
        return ans;
    }
};
