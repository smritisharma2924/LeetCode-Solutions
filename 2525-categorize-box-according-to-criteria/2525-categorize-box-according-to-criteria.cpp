class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool bulky=0, heavy=0;
        long long vol = (long long)length * width * height ;
        if (length >= 10000 || width >= 10000 || height >= 10000 || vol >= 1000000000) bulky=1;
        if (mass >= 100) heavy=1;
        if (bulky && heavy) return "Both";
        //else if (bulky==0 && heavy==0) return "Neither";
        else if (bulky==1 && heavy==0) return "Bulky";
        else if (bulky==0 && heavy==1) return "Heavy";
        else return "Neither";
    }
};