class Solution {
public:
    int reverse(int x) {
        long rev=0, rem=0;
        while(x) {
            rem = x%10;
            rev = rev*10 + rem;
            x /= 10;
           if (rev>INT_MAX || rev<INT_MIN) return 0;
        }
        return (int)rev;
    }
};