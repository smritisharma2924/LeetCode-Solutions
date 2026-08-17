class Solution {
public:
    vector<int> longestPrefixSuffix(string str) {
        int n = str.size();
        vector<int> lps(n,0);
        int pre=0, suf=1;
        while (suf < n) {
            if (str[pre] == str[suf]) {
                pre++;
                lps[suf] = pre;
                suf++;
            }
            else {
                if (pre == 0) {
                    lps[suf] = 0;
                    suf++;
                }
                else {
                    pre = lps[pre-1];
                }
            }
        }
        return lps;
    }
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        vector<int> lps = longestPrefixSuffix(needle);
        int first=0, second=0;
        while (first < n && second < m) {
            if (haystack[first] == needle[second]) {
                first++;
                second++;
            }
            else {
                if (second == 0) {
                    first++;
                }
                else {
                    second = lps[second-1];
                }
            }
        }
        if (second == m) return first-second;
        else return -1;
    }
};