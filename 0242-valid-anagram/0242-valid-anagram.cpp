class Solution {
public:
/*    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length()) {
            return false;
        }

        int H[26] = {0};
        for(int i =0; i<s.length(); i++) {
            H[s[i] - 97]++;
            H[t[i] - 97]--;
        }
        for(int i =0; i<26; i++) {
            if(H[i] != 0) {
                return false;
            }
        }
        return true;
    }
*/
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length()) {
            return false;
        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
};