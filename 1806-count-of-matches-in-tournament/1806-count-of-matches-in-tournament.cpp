class Solution {
public:
    int numberOfMatches(int n) {
        int match = 0;
        if(n==1){
            return 0;
        }
        while(n>1){
            if(n%2 == 0){
                int temp = n/2;
                match += temp;
                n = n/2;
            }
            if(n%2 != 0){
                int temp = (n-1)/2;
                match += temp;
                n = temp+1;
            }
        }
        return match;
    }
};