class Solution {
public:
    int maxDepth = 0;
    TreeNode* ans = nullptr;

    int dfs(TreeNode* root) {
        if (!root) return 0;

        int L = dfs(root->left);
        int R = dfs(root->right);

        int depth = 1 + max(L, R);

        if (L == R && depth >= maxDepth) {
            maxDepth = depth;
            ans = root;
        }

        return depth;
    }

    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
