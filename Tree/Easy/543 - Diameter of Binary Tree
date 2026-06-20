class Solution {
public:
    int dia = 0;  // holds the maximum diameter (in edges)

    int height(TreeNode* root) {
        if (root == nullptr) return 0;

        int lh = height(root->left);
        int rh = height(root->right);

        // diameter through this node = lh + rh (number of edges)
        dia = max(dia, lh + rh);

        // height of this subtree
        return 1 + max(lh, rh);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return dia;
    }
};
