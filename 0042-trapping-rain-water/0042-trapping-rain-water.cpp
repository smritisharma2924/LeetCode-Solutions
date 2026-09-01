class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>leftmax(height.size(),0);
        vector<int>rightmax(height.size(),0);
        for (int i=1 ; i<height.size() ; i++) leftmax[i] = max(leftmax[i-1],height[i-1]);
        for (int i=height.size()-2 ; i>=0 ; i--) rightmax[i] = max(rightmax[i+1],height[i+1]);
        int ans=0,min_ht;
        for (int i=0 ; i<height.size() ; i++) {
            min_ht = min(leftmax[i],rightmax[i]);
            if (min_ht>height[i]) ans += min_ht-height[i];
        }
        return ans;
    }
};