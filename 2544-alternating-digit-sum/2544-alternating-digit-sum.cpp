class Solution {
public:
    int alternateDigitSum(int n) {
        int dig=0, rev=0, sum=0, temp=n;
        while(temp) {
            dig = temp%10;
            rev = 10*rev + dig;
            temp /= 10;
        }
        while(rev) {
            dig = rev%10;
            sum += dig;
            rev /= 10;
            dig = rev%10;
            sum -= dig;
            rev /= 10;
        }
        return sum;
    }
};