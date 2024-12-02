class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int n1 = word1.length();
        int n2 = word2.length();
        int n = n1;
        if(n1 > n2) {
            n = n2;
        }

        string ans;
        for(int i=0; i<n; i++){
            ans.push_back(word1[i]);
            ans.push_back(word2[i]);
        }
        for(int i=n1 ;i<n2; i++){
            ans.push_back(word2[i]);
        }
        for(int i=n2; i<n1; i++){
            ans.push_back(word1[i]);
        }
        return ans;
    }
};