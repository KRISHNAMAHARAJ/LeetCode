class Solution {
public:
    int hammingDistance(int x, int y) {
        
        int count =0;
        while(x>0 || y>0){
            int xbit = x&1, ybit = y&1;
            if(xbit != ybit) {
                count++;
            }
            x = x >> 1;
            y = y >> 1;
        }
        return count;
    }
};



////////////// 
/*
    int hammingDistance(int x, int y) {
        
        int count =0;
        while(x>0 || y>0){
            int xbit = x&1, ybit = y&1;
            if(xbit != ybit) {
                count++;
            }
            x = x >> 1;
            y = y >> 1;
        }
        return count;
    }
*/
/*
    int hammingDistance(int x, int y) {
        
        int count =0; 
        int n = x ^ y;

        while(n){
            count++;
            n = n & n-1;
        }
        return count;
    }
*/