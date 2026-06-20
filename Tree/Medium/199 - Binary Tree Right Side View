class Solution {
public:
    void dfs(TreeNode* node, int depth, vector<int>& ans) {
        if (!node) return;

        // First time we reach this depth = rightmost node at this level
        if (depth == ans.size()) {
            ans.push_back(node->val);
        }

        // Visit right first, then left
        dfs(node->right, depth + 1, ans);
        dfs(node->left,  depth + 1, ans);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        dfs(root, 0, ans);
        return ans;
    }
};
