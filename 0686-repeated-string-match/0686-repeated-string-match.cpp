class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int count = 0;
        string temp = "";
        while (temp.size() <= b.size()) {
            temp += a;
            count++;
            if (temp.find(b) != string::npos) return count;
        }
        temp += a;
        if (temp.find(b) != string::npos) return count+1;
        return -1;
    }
};