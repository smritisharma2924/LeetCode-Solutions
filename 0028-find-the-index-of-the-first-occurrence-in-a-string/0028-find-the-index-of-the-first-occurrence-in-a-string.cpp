class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        int first, second;
        for (int i=0 ; i <= n-m ; i++) {
            first = i, second = 0;
            while (second < m && haystack[first] == needle[second]) {
                first++;
                second++;
            }
            if (second == m) return i;
        }
        return -1;
    }
};