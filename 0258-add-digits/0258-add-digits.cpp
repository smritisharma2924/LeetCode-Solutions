class Solution {
public:
    int addDigits(int num) {
        int ans=0;
        while (num>0) {
            ans += num%10;
            num /= 10;
        }
        if (ans>9) {
            return addDigits(ans);
        }
        return ans;
    }
};