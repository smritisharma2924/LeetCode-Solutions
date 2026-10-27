class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1;
        stack<char>s2;
        int i=0;
        while (s[i]) {
            if(s[i] == '#') {
                if(!s1.empty()) s1.pop();
            }
            else s1.push(s[i]);
            i++;
        }
        i=0;
        while (t[i]) {
            if(t[i] == '#') {
                if(!s2.empty()) s2.pop();
            }
            else s2.push(t[i]);
            i++;
        }

        while(!s1.empty() && !s2.empty()) {
            if(s1.top() != s2.top()) return false;
            s1.pop();
            s2.pop();
        }
        return s1.empty() && s2.empty();
    }
};