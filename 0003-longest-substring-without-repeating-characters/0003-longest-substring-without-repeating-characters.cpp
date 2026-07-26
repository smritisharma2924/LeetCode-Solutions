class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0, first=0, second=0;
        vector<int> count(256,0);
        while (second < s.size()) {
            while (count[s[second]]) {
                count[s[first]] = 0;
                first++;
            }
            count[s[second]] = 1;
            len = max(len, second-first+1);
            second++;
        }
        return len;
    }
};