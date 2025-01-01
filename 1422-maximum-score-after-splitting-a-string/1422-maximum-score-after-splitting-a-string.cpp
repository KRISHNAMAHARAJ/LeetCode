class Solution {
public:
    int maxScore(string s) {
    
        int score =0, result=0;

        for(int i=0; i<s.length()-1; i++){
            int zero_cnt = 0;
            int one_cnt = 0;

            for(int j=0; j<=i; j++){
                if(s[j] == '0'){
                    zero_cnt++;
                }
            }
            for(int j = i+1; j<s.length(); j++){
                if(s[j] == '1'){
                    one_cnt++;
                }
            }
            score = zero_cnt + one_cnt;
            result = max(result, score);
        }
        return result;
    }
};