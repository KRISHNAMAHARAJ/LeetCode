class Solution {
public:
    double myPow(double x, int n) {
        long long N = n; // Use long long to handle overflow for -2^31
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        double result = 1.0;
        while (N > 0) {
            if (N % 2 == 1) { // If N is odd
                result *= x;
            }
            x *= x;  // Square the base
            N /= 2;  // Halve the exponent
        }

        return result;
    }
};

////// Using recursion There is a problem in Stack Overflow so see above solution
/*
    double myPow(double x, long long n) {
        
        if(n == 0){
            return 1;
        }

        if(n>0){
            return (x * myPow(x, n-1));
        }
        else
            return ((1/x) * myPow(x, n+1));
    }
*/
