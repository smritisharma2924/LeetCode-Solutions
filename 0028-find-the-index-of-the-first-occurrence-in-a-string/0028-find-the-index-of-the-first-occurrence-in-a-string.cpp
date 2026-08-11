class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.find(needle) >= 0) return haystack.find(needle);
        return -1;
    }
};