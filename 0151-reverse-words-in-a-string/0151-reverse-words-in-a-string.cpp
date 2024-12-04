class Solution {
public:
    string reverseWords(string s) {
    // Trim the string to remove leading and trailing spaces
    int n = s.length();
    int i = 0, j = n - 1;
    
    // Remove leading spaces
    while (i < n && s[i] == ' ') i++;
    
    // Remove trailing spaces
    while (j >= 0 && s[j] == ' ') j--;
    
    // Now, we need to split the string into words
    vector<string> words;
    
    while (i <= j) {
        string word = "";
        // Extract a word
        while (i <= j && s[i] != ' ') {
            word += s[i++];
        }
        words.push_back(word);
        
        // Skip any intermediate spaces
        while (i <= j && s[i] == ' ') i++;
    }
    
    // Reverse the words in the vector
    reverse(words.begin(), words.end());
    
    // Join the words with a single space
    string result = "";
    for (int k = 0; k < words.size(); k++) {
        if (k > 0) result += " "; // Add space between words
        result += words[k];
    }
    
    return result;
}
};









/*
string reverseWords(string s) {
        
        int n = s.size();

        int i = 0, j = 0;

        while (i < n) {
        // Skip leading spaces
            while (i < n && s[i] == ' ') i++;
        
        // Copy the word
            while (i < n && s[i] != ' ') s[j++] = s[i++];
        
        // Skip trailing spaces but add a single space if there are more words
            while (i < n && s[i] == ' ') i++;
            if (i < n) s[j++] = ' ';
        }

    // Resize the string to remove the trailing space (if any)
        s.resize(j > 0 && s[j - 1] == ' ' ? j - 1 : j);


        reverse(s.begin(), s.end());

        int start = 0, end= 0;
        
        for(end = 0; end <= n; end++){
            if(end == n || s[end] == ' '){
                reverse(s.begin() + start, s.begin() + end);
                start = end +1;
            }
        }
        
        return s;
    }
*/