class Solution {
public:
    int hammingDistance(int x, int y) {
        
        int count =0; 
        int n = x ^ y;   // the result n represents a binary number where each bit is 1 
                        //if the corresponding bits in x and y are different, and 0 if they are the same. 
        while(n){
            count++;
            n = n & n-1;   // concept written below
        }
        return count;
    }
};

/*
    Concept of n &= n - 1:
        Subtracting 1 from a number flips all the bits after the rightmost 1 in the binary representation, including the     rightmost 1 itself.
    Performing n &= n - 1 clears the rightmost 1 in n.
*/


////////////// 
/*
    int hammingDistance(int x, int y) {
        
        int count =0;
        while(x>0 || y>0){
            int xbit = x&1, ybit = y&1;  // Extracting individual bits from integers
            if(xbit != ybit) {
                count++;
            }
            x = x >> 1;   //Removes the least significant bit by shifting bits to the right
            y = y >> 1;
        }
        return count;
    }
*/
