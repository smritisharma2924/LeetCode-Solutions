class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> right(n);
        vector<int> left(n);
        stack<int> st;
        // right array
        for (int i = 0; i < n; i++) {
            while (!st.empty() && heights[i] < heights[st.top()]) {
                right[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()) {
            right[st.top()] = n;
            st.pop();
        }
        // left array
        for (int i = n-1 ; i>=0 ; i--) {
            while (!st.empty() && heights[i] < heights[st.top()]) {
                left[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()) {
            left[st.top()] = -1;
            st.pop();
        }

        int ans = 0;
        for (int i=0 ; i < n ; i++) {
            ans = max(ans, heights[i] * (right[i]-left[i]-1));
        }
        return ans;
    }
};