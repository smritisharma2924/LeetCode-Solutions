class Solution {
public:
    int findComplement(int num) {
        long bin_c=0;
        long rem=0, mul=1;
        long num_m = num;
        while (num_m>0) {
            rem = num_m%2;
            rem = (rem==0) ? 1 : 0;
            bin_c += mul * rem;
            num_m /= 2;
            mul *= 2;
        }
        return bin_c;
    }
};