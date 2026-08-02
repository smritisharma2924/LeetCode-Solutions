class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for (int i=0 ; i<nums.size() ; i++) {
            if (nums[i]/10==0) continue;
            else {
                if (nums[i]/100==0) count++;
                else {
                    if (nums[i]/1000==0) continue;
                    else {
                        if (nums[i]/10000==0) count++;
                        else if (nums[i]==100000) count++;
                        else continue;
                    }
                }
            }
        }
        return count;
    }
};