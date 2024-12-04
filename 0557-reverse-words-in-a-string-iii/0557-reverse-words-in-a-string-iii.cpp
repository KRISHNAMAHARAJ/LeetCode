class Solution {
public:
    string reverseWords(string s) {
    int start = 0, n = s.size();
    for (int end = 0; end <= n; end++) {
        if (end == n || s[end] == ' ') {
            reverse(s.begin() + start, s.begin() + end); 
            start = end + 1; 
        }
    }
    return s;
}
};




////// 1st try - fail ///////

/*
int n = s.length();
        string result;
        vector<int> vec;
        for(int i=0; i<n; i++){
            while(s[i] != ' '){
                vec.push_back(s[i]);
            }
            reverse(vec.begin(), vec.end());
            for(int j=0; j<vec.size(); j++){
                result += vec[j];
            }
            vec.clear();
        }
        return result;
*/

