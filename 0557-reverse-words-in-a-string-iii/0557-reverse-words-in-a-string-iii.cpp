class Solution {
public:
    string reverseWords(string s) {
    int start = 0, n = s.size();
    for (int end = 0; end <= n; ++end) {
        // When we hit a space or reach the end of the string
        if (end == n || s[end] == ' ') {
            reverse(s.begin() + start, s.begin() + end); // Reverse the word
            start = end + 1; // Move to the next word
        }
    }
    return s;
}
};