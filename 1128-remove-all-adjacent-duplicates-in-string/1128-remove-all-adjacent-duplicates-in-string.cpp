class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string ans = "";
        for(int i = 0; i<s.length(); i++){
            if(!st.empty() && st.top() == s[i]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            char temp = st.top();
            st.pop();
            ans.push_back(temp);
        }
        int start = 0;
        int end = ans.length() -1;
        while(start<=end){
            swap(ans[start], ans[end]);
            start++;
            end--;
        }
        return ans;
    }
};