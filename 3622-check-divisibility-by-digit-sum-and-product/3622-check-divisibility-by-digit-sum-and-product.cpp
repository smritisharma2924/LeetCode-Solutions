class Solution {
public:
    bool checkDivisibility(int n) {
        int dig_sum=0, dig_mul=1, sum=0, dig=0, temp=n;
        while (n) {
            dig = n%10;
            dig_sum += dig;
            dig_mul *= dig;
            n /= 10;
        }
        sum = dig_sum + dig_mul;
        if (temp%sum==0) return true;
        else return false;
    }
};