class Solution {
public:
    int arrangeCoins(int n) {
        int row=0, coins=n;
        for(int i=1 ; i<=n ; i++) {
            coins -= i;
            if (coins >= 0) row++;
            else break;
        }
        return row;
    }
};