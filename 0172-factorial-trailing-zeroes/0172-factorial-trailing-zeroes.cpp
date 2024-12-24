class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;

        // Count the number of factors of 5 in the range [1, n]
        while (n >= 5) {
            n /= 5;
            count += n;
        }
        return count;
    } 
};


//////// TLE is coming  (Naive approach)
/*
    int fact(int n){

        if(n==0 || n==1){
            return 1;
        }
        return n * fact(n-1);   
    }

    int trailingZeroes(int n) {
        
        int result = fact(n);
        int count=0;
        while(result >= 0){
            int digit = result % 10;
            if(digit == 0){
                count++;
            }
            result /= 10; 
        }
        return count;
    }
*/