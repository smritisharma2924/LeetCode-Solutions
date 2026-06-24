class Solution {
public:
    bool validWeightCapacity(vector<int>& weights, int days, int capacity) {
        int count = 1, wt = 0;
        for (int i = 0 ; i < weights.size() ; i++) {
            wt += weights[i];
            if (wt > capacity) {
                count++;
                wt = weights[i]; // current package which caused overflow
            }
            else continue;
        }
        if (count <= days) return true;
        else return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0, high = 0, mid; // for finding the weight capacity
        int ans;
        for (int i=0 ; i < weights.size() ; i++) {
            low = max(low, weights[i]); //the least wt cap must be > or = the max wt on conveyer belt.
            high += weights[i]; //the max can be the sum of all if days = 1.
        }
        while (low <= high) {
            mid = low + (high - low)/2;
            if (validWeightCapacity(weights, days, mid)) {
                ans = mid; //it may be our answer
                high = mid - 1; //search in left half to find more suitable/less wt cap for our ans
            }
            else low = mid + 1;
        }
        return ans;
    }
};