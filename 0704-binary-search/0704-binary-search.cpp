class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1, idx;
        while (low <= high) {
            idx = (low+high)/2;
            if (nums[idx]==target) return idx;
            else if (nums[idx] > target) high = idx-1;
            else low = idx+1;
        }
        return -1;
    }
};