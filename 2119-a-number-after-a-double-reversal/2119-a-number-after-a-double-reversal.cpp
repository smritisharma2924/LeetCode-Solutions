class Solution {
public:
    bool isSameAfterReversals(int num) {
        if (num==0) return 1;
        else if (num%10==0) return 0;
        else return 1;
    }
};