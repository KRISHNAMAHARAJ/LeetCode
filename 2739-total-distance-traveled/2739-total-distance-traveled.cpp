class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        
        int dist=0;

        while(mainTank >= 5){

            dist += 50;
            if(additionalTank){
                additionalTank--;
                mainTank++;
            }
            mainTank -= 5;
        }
        dist += (mainTank*10);
        return dist;
    }
};