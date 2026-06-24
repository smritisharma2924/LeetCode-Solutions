class Solution {
public:
    int totalMoney(int n) {
        int money=1,sum=0;
        if (n<=7) {
            int i=1;
            while(i<=n) {
                sum += money;
                money++;
                i++;
            }
        }
        else {
            int j=1, k=1;
            while(j<=n/7) {
                while(k<=7) {
                    sum += money;
                    money++;
                    k++;
                }
                k=1;
                j++;
                money=j;
            }
            money=n/7 + 1,k=1,j=1;
            while(j<=n%7) {
                sum += money;
                money++;
                j++;
            }
        }
        return sum;
    }
};