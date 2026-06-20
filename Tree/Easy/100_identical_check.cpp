struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

bool isIdentical(Node* root1, Node* root2) {
    // Both trees empty
    if (root1 == NULL && root2 == NULL)
        return true;

    // One empty, one not
    if (root1 == NULL || root2 == NULL)
        return false;

    // Check current node and subtrees
    return (root1->data == root2->data) &&
           isIdentical(root1->left, root2->left) &&
           isIdentical(root1->right, root2->right);
}