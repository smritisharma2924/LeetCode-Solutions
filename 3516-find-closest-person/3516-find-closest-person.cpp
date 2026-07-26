class Solution {
public:
    int findClosest(int x, int y, int z) {
        if (z<=y && z<=x) return ((y<=x) ? ((y<x) ? 2 : 0) : 1)  ;
        else if (z>=y && z>=x) return ((y>=x) ? ((y>x) ? 2 : 0) : 1)  ;
        else if (x>=z && x>=y) return (((z-y)>=(x-z)) ? (((z-y)>(x-z)) ? 1 : 0) : 2) ;
        else return (((y-z)>=(z-x)) ? (((y-z)>(z-x)) ? 1 : 0) : 2) ;
    }
};