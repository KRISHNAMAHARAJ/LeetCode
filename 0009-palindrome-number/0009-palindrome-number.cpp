class Solution {
public:
    bool isPalindrome(int x) {
         if (x < 0) {
            return false;
        }

        long long reversed = 0;
        long long temp = x;

        while (temp != 0) {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }

        return (reversed == x);
    }



    ////////////// USING STRING CONVERSION //////////////////////
    /*
    bool isPalindrome(int x) {

        string str = to_string(x);

        string rev = str;
        reverse(rev.begin(), rev.end());

        return (str == rev);
    }
    */
};