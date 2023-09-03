class Solution {
public:
    int minimumOperations(string num) {
        bool fivefound = false;
        bool zerofound = false;
        int n = num.size();
        for(int i = n-1; i>=0; i--){
            if(fivefound && num[i] == '7'){
                return n-2-i;
            }
            else if(fivefound && num[i] == '2'){
                return n-2-i;
            }
            else if(zerofound && num[i] == '5'){
                return n-2-i;
            }
            else if(zerofound && num[i] == '0'){
                return n-2-i;
            }

            if(num[i] == '5'){
                fivefound = true;
            }
            if(num[i] == '0'){
                zerofound = true;
            }
        }
        if(zerofound){
            return n-1;
        }
        return n;
    }
};