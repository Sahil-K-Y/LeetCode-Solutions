class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root){
            return 0;
        }
        queue<pair<TreeNode*,int>>q;
        q.push({root,1});
        while(q.size()>0){
            auto [node,depth]=q.front();
            q.pop();
            if(node->left==nullptr && node->right==nullptr){
                return depth;
            }
            if(node->left){
                q.push({node->left,depth+1});
            }
            if(node->right){
                q.push({node->right,depth+1});
            }
        }
            return 0;
    }
};
