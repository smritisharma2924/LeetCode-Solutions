class Solution {
public:
    int trailingZeroes(int n) {
        long long zero = 0;
        while(n >= 5){
            zero += n/5;
            n/=5;
        }
        return zero;
    }
};