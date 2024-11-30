class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        int hash[26] ={0};
        for(int i=0; i<sentence.length(); i++){
            hash[sentence[i]-97]++;
        }
        for(int i=0; i<26; i++){
            if(hash[i] < 1) return false;
        }
        return true;
    }
};