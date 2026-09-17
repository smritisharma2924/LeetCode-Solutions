class Solution {
public:
    void parentheses(int n, int left, int right, string temp, vector<string>& ans) {
        // base case
        if (left == n && right == n) {
            ans.push_back(temp);
            return;
        }
        // left
        if (left < n) parentheses(n, left+1, right, temp+"(", ans);
        // right
        if (right < left) parentheses(n, left, right+1, temp+")", ans);
    }
    vector<string> generateParenthesis(int n) {
        int left=0, right=0;
        string temp = "";
        vector<string> ans;
        parentheses(n, left, right, temp, ans);
        return ans;
    }
};