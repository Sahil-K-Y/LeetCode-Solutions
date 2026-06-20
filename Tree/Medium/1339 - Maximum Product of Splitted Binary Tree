class Solution {
public:
    long long total = 0, ans = 0;
    const int MOD = 1e9 + 7;

    long long solve(TreeNode* root) {
        if (!root) return 0;

        long long s = root->val + solve(root->left) + solve(root->right);
        ans = max(ans, s * (total - s));
        return s;
    }

    int maxProduct(TreeNode* root) {
        solveTotal(root);
        solve(root);
        return ans % MOD;
    }

private:
    void solveTotal(TreeNode* root) {
        if (!root) return;
        total += root->val;
        solveTotal(root->left);
        solveTotal(root->right);
    }
};
