class Solution {
public:
    bool digitCount(string num) {
        
        int hash[10] = {0};
        for(int i=0; i<num.length(); i++){
            hash[num[i]-48]++;
        }
        for(int i=0; i<num.length(); i++){
            if(hash[i] != (num[i]- 48) ){
                return false;
            }
        }
        return true;
    }
};