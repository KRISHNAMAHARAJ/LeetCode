class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
    
        for (int num : nums) {
            int largestDigit = 0;
            int temp = num;
        
            // Find the largest digit in the current number
            while (temp > 0) {
                largestDigit = max(largestDigit, temp % 10);
                temp /= 10;
            }
        
            // Form the encrypted number with the largest digit
            int encrypted = 0;
            int placeValue = 1;
        
            while (num > 0) {
                encrypted += largestDigit * placeValue;
                placeValue *= 10;
                num /= 10;
            }
            sum += encrypted;
        }
        return sum;
    }

};