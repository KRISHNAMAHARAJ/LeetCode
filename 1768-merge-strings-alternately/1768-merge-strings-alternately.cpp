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
        for(int i=0, j=0; i<n; i++, j++){
            ans.push_back(word1[i]);
            ans.push_back(word2[j]);
        }
        for(int j=n1 ;j<n2; j++){
            ans.push_back(word2[j]);
        }
        for(int i=n2; i<n1; i++){
            ans.push_back(word1[i]);
        }
        return ans;
    }
};