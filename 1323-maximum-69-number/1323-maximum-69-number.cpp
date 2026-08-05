class Solution {
public:
    int maximum69Number (int num) {
        int rev=0, dig=0;
        if (num==9 || num==99 || num==999 || num==9999) return num;
        while(num) {
            dig = num%10;
            rev = 10*rev + dig;
            num /= 10;
        }
        if (rev%10!=9) rev = 10*(rev/10) + 9;
        else {
            int temp=rev/10;
            if (temp%10!=9) rev = 100*(temp/10) + 90 + rev%10;
            else {
                int temp2=rev/100;
                if (temp2%10!=9) rev = 1000*(temp/100) + 900 + rev%100;
                else {
                    int temp3=rev/1000;
                    if (temp3!=9) rev = 9000 + rev%1000;
                }
            }
        }
        int new1=0;
        while(rev) {
            dig = rev%10;
            new1 = 10*new1 + dig;
            rev /= 10;
        }
        return new1;
    }
};