class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        double slope=0;
        if ((coordinates[1][0]-coordinates[0][0]) != 0) {
            slope = (double)(coordinates[1][1]-coordinates[0][1]) / (coordinates[1][0]-coordinates[0][0]);
        }
        else slope = 1e18;
        for (int i=2 ; i<coordinates.size() ; i++) {
            double new_slope=0;
            if ((coordinates[i][0]-coordinates[i-1][0]) != 0) {
                new_slope = (double)(coordinates[i][1]-coordinates[i-1][1]) / (coordinates[i][0]-coordinates[i-1][0]);
            }
            else new_slope = 1e18;
            if (new_slope != slope) return false;
        }
        return true;
    }
};