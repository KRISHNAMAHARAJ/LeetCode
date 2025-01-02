class Solution {
public:
    char findTheDifference(string s, string t) {

        vector<int> hash(26, 0);

        for(int i = 0; i<s.length(); i++){
            hash[s[i] - 97]++;
        }

        for(int i=0; i<t.length(); i++){
            hash[t[i] - 97]--;
        }

        for(int i=0; i<hash.size(); i++){
            if(hash[i] == -1){
                return char(i+97);
            }
        }
        return '0';
    }
};