struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Check if two trees are identical
bool isIdentical(Node* root1, Node* root2) {
    if (root1 == NULL && root2 == NULL)
        return true;

    if (root1 == NULL || root2 == NULL)
        return false;

    return (root1->data == root2->data) &&
           isIdentical(root1->left, root2->left) &&
           isIdentical(root1->right, root2->right);
}

// Check if S is a subtree of T
bool isSubtree(Node* T, Node* S) {
    if (S == NULL)
        return true;

    if (T == NULL)
        return false;

    if (isIdentical(T, S))
        return true;

    return isSubtree(T->left, S) || isSubtree(T->right, S);
}