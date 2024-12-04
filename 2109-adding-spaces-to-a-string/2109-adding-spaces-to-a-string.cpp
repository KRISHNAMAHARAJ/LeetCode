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



/////// IN O ms runtime///////
/*
string addSpaces(string s, vector<int>& sps) {
        string res(s.size() + sps.size(), ' ');
        for (int i = 0, j = 0; i < s.size(); ++i) {
            if (j < sps.size() && i == sps[j])
                ++j;
            res[i + j] = s[i];
        }
        return res;
    }
*/