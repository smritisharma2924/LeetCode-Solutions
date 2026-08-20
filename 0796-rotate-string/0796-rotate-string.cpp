class Solution {
public:
    bool rotateString(string s, string goal) {
        string twice = s + s;
        if (s.size() != goal.size()) return false;
        else return twice.find(goal) != string::npos;
    }
};