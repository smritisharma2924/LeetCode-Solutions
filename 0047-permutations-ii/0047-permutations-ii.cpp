class Solution {
public:
    void permut(vector<vector<int>>& ans, vector<int> nums, int idx) {
        if (idx == nums.size()) {
            if (find(ans.begin(), ans.end(), nums) == ans.end()) {
                ans.push_back(nums);
                return;
            }
            return;
        }
        for (int i=idx ; i < nums.size() ; i++) {
            swap(nums[i], nums[idx]);
            permut(ans, nums, idx+1);
            swap(nums[i], nums[idx]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        permut(ans, nums, 0);
        return ans;
    }
};