class Solution {
public:
    int strStr(string haystack, string needle) {
        int found = 0;

        found = haystack.find(needle);
        if(found != string::npos) return found;
        else return -1;
    }
};