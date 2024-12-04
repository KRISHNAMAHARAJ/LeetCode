class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        
        int n=spaces.size();
        string temp;
        int j=0;

        for(int i =0; i<n; i++){
            while(j < spaces[i]) {
                temp += s[j];
                j++;
            }
            temp += ' ';
        }
        temp += s.substr(j);
        
        return temp;
    }
};
