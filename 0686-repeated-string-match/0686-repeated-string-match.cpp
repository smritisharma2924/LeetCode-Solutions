class Solution {
public:
    vector<int> createLps(string s) {
        int pre = 0, suf = 1;
        vector<int> lps(s.size(), 0);
        while (suf < s.size()) {
            if (s[pre] == s[suf]) {
                pre++;
                lps[suf] = pre;
                suf++;
            }
            else {
                if (pre == 0) suf++;
                else pre = lps[pre-1];
            }
        }
        return lps;
    }
    bool kmpSearch(vector<int>& lps, string haystack, string needle) {
        int first = 0, second = 0;
        while (first < haystack.size() && second < needle.size()) {
            if (haystack[first] == needle[second]) {
                first++;
                second++;
            }
            else {
                if (second == 0) first++;
                else second = lps[second-1];
            }
        }
        if (second == needle.size()) return true;
        else return false;
    }
    int repeatedStringMatch(string a, string b) {
        int count = 0;
        string temp = "";
        while (temp.size() < b.size()) {
            temp += a;
            count++;
        }
        // kmp search
        vector<int> lps = createLps(b);
        if (kmpSearch(lps, temp, b)) return count;
        // temp+a, kmp search
        temp += a;
        if (kmpSearch(lps, temp, b)) return count+1;
        return -1;
    }
};