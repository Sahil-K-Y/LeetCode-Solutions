class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,long long>>q;
        q.push({root,0});
        int maxwt=0;
        while(q.size()>0){
            int currlevel=q.size();
            int stindex=q.front().second;
            int endindex=q.back().second;
            maxwt=max(maxwt,endindex-stindex+1);
            for(int i=0;i<currlevel;i++){
                auto curr=q.front();
                q.pop();
                TreeNode* current = curr.first;
                long long ind = curr.second - stindex;
                if(current->left){
                    q.push({current->left,2*ind+1});
                }
                if(current->right){
                    q.push({current->right,2*ind+2});
                }
            }
        }
        return maxwt;
    }
};
