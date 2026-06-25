class Solution {
public:
    int countDigits(int num) {
        int temp = num;
        int temp1 = num, dig = 0;
        while(temp) {
            temp1 = temp%10;
            if (num%temp1 == 0) dig++;
            temp /= 10;
        }
        return dig;
    }
};