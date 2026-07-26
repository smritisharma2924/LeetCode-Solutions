class Solution {
public:
    long long sumAndMultiply(int n) {
        int rev=0, dig=0, sum=0, org=0;
        while (n) {
            dig = n%10;
            if (dig!=0) rev = 10*rev + dig;
            n /= 10;
        }
        while (rev) {
            dig = rev%10;
            org = (long long)(10*org + dig);
            sum += dig;
            rev /= 10;
        }
        return (long long)sum*org;
    }
};