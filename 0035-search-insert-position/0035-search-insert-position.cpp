class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int pos=-1, low=0, high=n-1, mid=0;
        if (nums[0]>target) return 0;
        if (nums[n-1]<target) return n;
        while (low<=high) {
            mid = low + (high-low)/2;
            if (nums[mid]==target) {
                pos = mid;
                break;
            }
            else if (nums[mid]>target) {
                pos = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return pos;
    }
};