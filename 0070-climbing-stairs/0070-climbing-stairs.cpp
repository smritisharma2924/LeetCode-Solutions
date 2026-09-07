class Solution {
public:
    int climbStairs(int n) {
        int first = 1, second = 2, curr;
        if (n == 1 || n == 2) return n;
        for (int i=3 ; i <= n ; i++) {
            curr = first+second;
            first = second;
            second = curr;
        }
        return curr;
    }
};