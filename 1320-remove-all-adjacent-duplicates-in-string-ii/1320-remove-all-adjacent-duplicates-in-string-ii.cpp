class Solution {
public:
    string removeDuplicates(string s, int k) {
        string ans="";
        stack<pair<char,int>>stk;
        int n=s.size();
        for(int i=0; i<n; i++){
            if(stk.empty()){
                stk.push({s[i],1});
            }
            else{
                if(stk.top().first==s[i]){
                    stk.push({s[i],stk.top().second+1});
                }
                else{
                    stk.push({s[i],1});
                }
                if(stk.top().second==k){
                    int temp=k;
                    while(temp--){
                        stk.pop();
                    }
                }
            }
        }
        while(!stk.empty()){
            ans+=stk.top().first;
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};