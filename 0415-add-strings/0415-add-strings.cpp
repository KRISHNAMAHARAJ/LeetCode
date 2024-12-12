class Solution {
public:
    string addStrings(string a, string b) {
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;
        string ans = "";

        while (i >= 0 || j >= 0 || carry == 1) {
            if (i >= 0) {
                carry += a[i] - '0';
                i--;
            }
            if (j >= 0) {
                carry += b[j] - '0';
                j--;
            }
            ans += (carry % 10) + '0';
            carry /= 10;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};