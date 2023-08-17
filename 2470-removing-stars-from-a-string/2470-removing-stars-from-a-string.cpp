class Solution {
public:
    string removeStars(string s) {
        string c = "";
        for(int i= 0; i<s.length(); i++){
            if(s[i] == '*'){
                c.pop_back();
            }
            else{
                c += s[i];
            }
        }
        return c;
    }
};