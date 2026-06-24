class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        long rev=0, rem=0;
        long org=x;
        while(x!=0) {
            rem = x%10;
            rev = rev*10 + rem;
            x /= 10;
        }
        if (rev==org) return true;
        else return false;
    }
};