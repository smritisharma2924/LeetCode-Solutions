class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int cell = n*n, count=0, weight=w;
        for(int i=1 ; i<=cell ; i++) {
            if (weight<=maxWeight) {
                count++;
                weight+=w;
            }
            else break;
        }
        return count;
    }
};