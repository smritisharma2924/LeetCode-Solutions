class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        if (arr[0]>arr[1]) return 0;
        else if (arr[arr.size()-1]>arr[arr.size()-2]) return arr.size()-1;
        else {
            int low=1, high=arr.size()-2, mid;
            while (low<=high) {
                mid = low + (high-low)/2;
                if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
                else if (arr[mid]>arr[mid-1]) low = mid+1;
                else high = mid-1;
            }
            return -1;
        }
    }
};