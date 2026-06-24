class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n<1) return false;
        while (n!=1) {
            int rem = n%2;
            if (rem != 0) return false;
            n /= 2;
        }
        return true;
    }
};