// Problem: 101. Symmetric Tree
// Runtime: 0 ms (Beats 100.00%)
// Memory: 18.5 MB (Beats 71.36%)

class Solution {
public:
    bool isMirror(TreeNode* left, TreeNode* right) {
        if (left == nullptr && right == nullptr)
            return true;

        if (left == nullptr || right == nullptr)
            return false;

        if (left->val != right->val)
            return false;

        return isMirror(left->left, right->right) &&
               isMirror(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (root == nullptr)
            return true;

        return isMirror(root->left, root->right);
    }
};