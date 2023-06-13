class Solution {
public:
    bool checkRecord(string s) {
        int cnt = 0;
        for(int i = 0; i<s.length(); i++){
            if(s[i] == 'A'){
                cnt++;
                
            }
            if(cnt >= 2){
                return false;
            }
        }
        for(int i=1; i<s.length(); i++){
            if(s[i-1] == 'L' && s[i] == 'L' && s[i+1]=='L'){
                return false;
            }
        }
        return true;
    }
};