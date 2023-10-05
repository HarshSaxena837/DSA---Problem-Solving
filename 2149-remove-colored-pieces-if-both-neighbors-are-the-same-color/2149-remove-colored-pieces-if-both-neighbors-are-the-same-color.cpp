class Solution {
public:
    bool winnerOfGame(string colors) {
        int aliceScore = 0;
        int bobScore = 0;
        for(int i = 1; i<colors.size()-1; i++){
            char currcolor = colors[i];
            char prevcolor = colors[i-1];
            char nextcolor = colors[i+1];

            if(currcolor == 'A' && prevcolor == 'A' && nextcolor == 'A'){
                aliceScore++;
            }
            else if(currcolor == 'B' && prevcolor == 'B' && nextcolor == 'B'){
                bobScore++;
            }
        }
        if(aliceScore > bobScore){
            return true;
        }
        else{
    
            return false;
        }
    }
};