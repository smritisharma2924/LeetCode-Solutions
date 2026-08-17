class Solution {
public:
    string shortestPalindrome(string s) {
        int n = s.size();
        string rev = s, actual = s;
        reverse(rev.begin(), rev.end());
        s += '$';
        s += rev;
        // lps array
        vector<int> lps(s.size(),0);
        int prefix = 0, suffix = 1;
        while (suffix < s.size()) {
            if (s[prefix] == s[suffix]) {
                prefix++;
                lps[suffix] = prefix;
                suffix++;
            }
            else {
                if (prefix == 0) suffix++;
                else prefix = lps[prefix-1];
            }
        }
        int min_chars = n - lps[s.size()-1];
        string pre;
        for (int i=0 ; i < min_chars ; i++) pre.push_back(rev[i]);
        return pre + actual;
    }
};