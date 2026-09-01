class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>order;
        int top=0, right=matrix[0].size()-1, bottom=matrix.size()-1, left=0;
        int i,j;
        while (top<=bottom && left<=right) {
            for (j=left ; j<=right ; j++) order.push_back(matrix[top][j]);
            top++;
            for (i=top ; i<=bottom ; i++) order.push_back(matrix[i][right]);
            right--;
            if (top<=bottom) {
                for (j=right ; j>=left ; j--) order.push_back(matrix[bottom][j]);
                bottom--;
            }
            if (left<=right) {
                for (i=bottom ; i>=top ; i--) order.push_back(matrix[i][left]);
                left++;
            }
        }
        return order;
    }
};