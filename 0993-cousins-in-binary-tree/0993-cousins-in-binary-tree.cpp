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
    bool sameParents(TreeNode* root, int x, int y) {
        if (!root) return false;
        if (root->left && root->right) {
            if (root->left->val == x && root->right->val == y) return true;
            if (root->left->val == y && root->right->val == x) return true;
        }
        return sameParents(root->left, x, y) || sameParents(root->right, x, y);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*> q;
        q.push(root);
        int l1 = -1, l2 = -1;
        int level = 0;
        while (!q.empty()) {
            int n = q.size();
            while (n--) {
                TreeNode *temp = q.front();
                q.pop();
                if (temp->val == x) l1 = level;
                if (temp->val == y) l2 = level;
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right); 
            }
            level++;
            if (l1 != l2) return false;
            // if code is here then the levels are equal
            if (l1 != -1) break; // stop when l1 is found
        }
        return !sameParents(root, x, y);
    }
};