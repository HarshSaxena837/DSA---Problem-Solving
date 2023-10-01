class Solution {
public:
    string reverseStr(string s, int k) {
        int l = 0;
        int n = s.size();
        int r = min(n, k);
        while(l<n){
            reverse(s.begin() + l, s.begin() + r);
            l += 2*k;
            r =  min(n, l+k);
        }
        return s;
    }
};