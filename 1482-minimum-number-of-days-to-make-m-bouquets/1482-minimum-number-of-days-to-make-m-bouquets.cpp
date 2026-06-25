class Solution {
public:
    bool isPossible(vector<int>& bloomDay, int m, int k, int mid) {
        int adjFlwr = 0, bouquet = 0;
        for (int i=0 ; i < bloomDay.size() ; i++) {
            if (bloomDay[i] <= mid) {
                adjFlwr++;
            }
            else adjFlwr = 0; // if not continuos then no use for making bouquet
            if (adjFlwr == k) {
                bouquet++;
                adjFlwr = 0;
            }
        }
        if (bouquet >= m) return true;
        else return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long long)m * k > bloomDay.size()) return -1;
        int low = 0, high = 0, mid, ans;
        for (int i=0 ; i < bloomDay.size() ; i++) { // we atleast need to wait till the first flower blooms and atmax till the last flower blooms. our ans will range bw these two.
            low = min(low, bloomDay[i]);
            high = max(high, bloomDay[i]);
        }
        while (low <= high) {
            mid = low + (high-low)/2;
            if (isPossible(bloomDay, m, k, mid)) {
                ans = mid;
                high = mid - 1; // finding the minimum answer
            }
            else low = mid + 1;
        }
        return ans;
    }
};