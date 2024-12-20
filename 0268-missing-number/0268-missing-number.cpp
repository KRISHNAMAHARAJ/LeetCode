class Solution {
public:
    int missingNumber(vector<int>& nums) {

      /*  
       int N = nums.size() +1;

       int sum = (N*(N+1))/2;

       int arr_sum = 0;
       for(int i = 0; i<nums.size(); i++) {
            arr_sum += nums[i];
       }
       return arr_sum;

       int missingNum = sum - arr_sum;

       return missingNum;
*/

    int N = nums.size() ;

    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < N; i++) {
        xor2 = xor2 ^ nums[i]; // XOR of array elements
        xor1 = xor1 ^ i; //XOR up to [1...N-1]
    }
    xor1 = xor1 ^ N; //XOR up to [1...N]

    return (xor1 ^ xor2); // the missing number
    }

};