class Solution {
public:
    bool isPalindrome(string s) {
        
        string str1;
        for(int i=0; i<s.length(); i++) {
            if(isalnum(s[i])) {
                str1.push_back(tolower(s[i]));
            }
        }
        int n = str1.length();
        int left =0;
        int right = n-1;

        while(left <= right)  {
            if(str1[left] != str1[right]) {
                return false;
            }
            left++;
            right--;
        } 
        return true;         
    }
};