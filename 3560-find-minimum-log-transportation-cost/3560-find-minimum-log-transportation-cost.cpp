class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        long cost=0;
        if (n<=k && m<=k) return cost;
        else {
            if (n>k) {
                int len1=k, len2=n-k;
                cost += (long)len1*len2;
            }
            if (m>k) {
                int len3=k, len4=m-k;
                cost += (long)len3*len4;
            }
            return cost;
        }
    }
};