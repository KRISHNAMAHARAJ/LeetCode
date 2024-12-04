class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
       
        int n = words.size();
        vector<int> result;

        for(int i=0; i<n; i++){
            for(int j=0; words[i][j] != '\0'; j++){
                if(words[i][j] == x){
                    result.push_back(i);
                    break;
                }
            }
        }
        return result;
    }
};


////////BOTH TC ANS SC ARE SAME O(N^2) and O(N) ///////////

/*
vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>res;
        for(int i=0;i<words.size();i++){
            if(words[i].find(x)!=string::npos){
                res.push_back(i);

            }
        }
        return res;
        
    }
*/