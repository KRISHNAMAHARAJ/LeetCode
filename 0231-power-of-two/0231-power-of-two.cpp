class Solution {
public:
    bool isPowerOfTwo(int n) {
                                    ///// using bit manipulation
        return n > 0 && (n & (n - 1)) == 0;
    }
};


//////// USING ITERATIVE DIVISION TC:- O(logn) and SC:- O(1)
/*
    bool isPowerOfTwo(int n) {
        
        if (n <= 0) return false;
        while(n%2==0){
            n = n/2;
        }
        if(n==1) return true;
        return false;
    }
*/