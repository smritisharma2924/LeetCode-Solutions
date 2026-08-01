class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num==1) return true;
        long long ans;
        for(int i=2 ; i<=num/2 ; i++) {
            ans = (long long)i*i;
            if (ans==num) return true;
        }
        return false;
    }
};