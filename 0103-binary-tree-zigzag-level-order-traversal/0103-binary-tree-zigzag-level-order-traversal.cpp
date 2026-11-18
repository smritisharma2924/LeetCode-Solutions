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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;
        stack<TreeNode*> s1; // for r to l
        stack<TreeNode*> s2; // for l to r
        s2.push(root); // its mentioned in the problem to start from  l to r
        while (!s1.empty() || !s2.empty()) {
            vector<int> level;
            if (!s1.empty()) { // r to l
                while (!s1.empty()) {
                    TreeNode *temp = s1.top();
                    s1.pop();
                    level.push_back(temp->val);
                    if (temp->right) s2.push(temp->right);
                    if (temp->left) s2.push(temp->left);
                }
            }
            else { // l to r
                while (!s2.empty()) {
                    TreeNode *temp = s2.top();
                    s2.pop();
                    level.push_back(temp->val);
                    if (temp->left) s1.push(temp->left);
                    if (temp->right) s1.push(temp->right);
                }
            }
            ans.push_back(level);
        }
        return ans;
    }
};