class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        TreeNode*curr=root;
        while(curr!=nullptr){
            if(curr->left==nullptr){
                ans.push_back(curr->val);
                curr=curr->right;
            }
            else{
                TreeNode*ip=curr->left;;
                while(ip->right!=nullptr && ip->right!=curr){
                    ip=ip->right;
                }
                if(ip->right==nullptr){
                    ip->right=curr;
                    curr=curr->left;
                }
                else{
                    ip->right=nullptr;
                    ans.push_back(curr->val);
                    curr=curr->right;
                }
            }
        }
        return ans;
    }
};
