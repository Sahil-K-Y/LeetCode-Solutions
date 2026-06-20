class Solution {
public:
    int ans = INT_MAX;
    int prev = -1;

    void dfs(TreeNode* root) {
        if (!root) return;

        dfs(root->left);

        if (prev != -1) {
            ans = min(ans, root->val - prev);
        }
        prev = root->val;

        dfs(root->right);
    }

    int getMinimumDifference(TreeNode* root) {
        dfs(root);
        return ans;
    }
};
