//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    void solve(string s, int i, vector<string>& ans, string op){
	        
	       // base case
	       if(i >= s.size()){
	           if(op.size() > 0){
	               ans.push_back(op);
	           }
	           return;
	       }
	       
	       //exclude 
	       solve(s, i+1, ans, op);
	       
	       //include
	       char ch = s[i];
	       op.push_back(ch);
	       solve(s, i+1, ans, op);
	       
	       
	       
	    }
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> ans;
		    string op = "";
		    int i = 0;
		    solve(s,i, ans, op);
		    sort(ans.begin(), ans.end());
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends