class Solution {
public:

/////////USING FIND STRING METHOD ////////////////
/*
    int strStr(string haystack, string needle) {
        int found = 0;

        found = haystack.find(needle);
        if(found != string::npos) return found;
        else return -1;
    }
*/

    /////////////Using substr and slicing method///////////
    int strStr(string haystack, string needle) {
        
        if(haystack.length() < needle.length()) {
            return -1;
        }
        for(int i=0; i <= haystack.length() - needle.length(); i++){
            if(haystack.substr(i, needle.length()) == needle) {
                return i;
            }
        }
        return -1;
    }
};