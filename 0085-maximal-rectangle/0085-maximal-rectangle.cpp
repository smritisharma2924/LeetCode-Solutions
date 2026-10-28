class Solution {
public:
    int maxArea(vector<int> height) { // from lc 84
        int n = height.size();
        vector<int>right(n);
        vector<int>left(n);
        stack<int>st;
        for(int i=0 ; i<n ; i++) {
            while(!st.empty() && height[i] < height[st.top()]) {
                right[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()) {
            right[st.top()] = n;
            st.pop();
        }
        for(int i=n-1 ; i>=0 ; i--) {
            while(!st.empty() && height[i] < height[st.top()]) {
                left[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()) {
            left[st.top()] = -1;
            st.pop();
        }
        int ans=0;
        for(int i=0 ; i<n ; i++) {
            ans = max(ans, height[i] * (right[i]-left[i]-1));
        }
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int>heights(col,0);
        int ans=0;
        for(int i=0 ; i<row ; i++) {
            for(int j=0 ; j<col ; j++) {
                if (matrix[i][j] == '0') heights[j] = 0;
                else heights[j] += 1;
            }
            ans = max(ans,maxArea(heights));
        }
        return ans;
    }
};