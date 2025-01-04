class Solution {
public:
    bool canAliceWin(int n) {
        
        bool flag =0;

        for(int i=10; i>0; i--){
            if(n-i < 0){
                return flag;
            }
            n = n-i;
            flag = !flag;
        }
        return flag;
    }
};