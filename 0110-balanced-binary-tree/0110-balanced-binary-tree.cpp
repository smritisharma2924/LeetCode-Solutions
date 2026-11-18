/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root, bool &valid) {
        if (!root) return 0;
        int lefth = height(root->left, valid);
        int righth = height(root->right, valid);
        if (abs(lefth - righth) > 1) valid = 0;
        return 1 + max(lefth, righth);
    }
    bool isBalanced(TreeNode* root) {
        bool valid = 1;
        height(root, valid);
        return valid;
    }
};