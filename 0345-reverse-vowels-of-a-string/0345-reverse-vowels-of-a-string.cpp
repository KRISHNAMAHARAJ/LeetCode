class Solution {
public:
    string reverseVowels(string s) {
        
        int n = s.length();
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        int i= 0, j = n-1;
        while(i < j) {
            while (i < j && vowels.find(s[i]) == vowels.end()) {
                i++;
            }
            while (i < j && vowels.find(s[j]) == vowels.end()) {
                j--;
            }

            if (i < j && vowels.find(s[i]) != vowels.end() && vowels.find(s[j]) != vowels.end()) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;  
    }
};
