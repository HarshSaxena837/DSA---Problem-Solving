class Solution {
public:
    bool isPowerOfFour(int n) {
        while(n!=0){
            if(n == 1){
                return true;
            }
            else if(n%4 != 0){
                return false;
            }
            n=n/4;
        }
        return false;
        
    }
};