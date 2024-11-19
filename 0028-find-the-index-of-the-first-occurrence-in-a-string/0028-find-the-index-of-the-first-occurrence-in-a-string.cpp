class Solution {
public:
    int strStr(string haystack, string needle) {
        int found = 0;

        int str1 = haystack.length();
        int str2 = needle.length();

        found = haystack.find(needle);
        if(found != string::npos) return found;
        else return -1;
    }
};