class Solution {
public:
    string convertToBase7(int num) {
        int dig=0, temp=num;
        string ans = "";
        if (num==0) return "0";
        else if (num>0) {
            while(num) {
                dig = num%7;
                ans += to_string(dig);
                num /= 7;
            }
            reverse(ans.begin(), ans.end());
        }
        else {
            ans = "-";
            while(num) {
                dig = (-1)*num%7;
                ans += to_string(dig);
                num /= 7;
            }
            reverse(ans.begin()+1, ans.end());
        }
        return ans;
    }
};