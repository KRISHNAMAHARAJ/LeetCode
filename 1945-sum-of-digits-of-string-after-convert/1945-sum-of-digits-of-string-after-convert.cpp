class Solution {
public:
    int getLucky(string s, int k) {
    // Step 1: Convert letters to numbers and calculate the sum of all the digits
    int num = 0;
    for (char c : s) {
        int val = c - 'a' + 1; // Convert letter to number (a = 1, b = 2, ..., z = 26)
        while (val > 0) {
            num += val % 10; // Sum the digits of the position (e.g., 26 -> 2 + 6)
            val /= 10;
        }
    }

    // Step 2: Repeat the transformation process for k iterations
    while (k > 1) { // We already did the first transformation above
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
        k--;
    }

    return num;   
}

};






/*

int getLucky(string s, int k) {
        
        int n= s.length();
        int num;
        for(int i =0; i<n; i++){
            num 
        }

        while(k>0){
            int sum =0;
            while(num > 0){
                sum += num % 10;
                num = num / 10;
            }
            k--;
            num = sum;
        }
        return num;   
    }
*/