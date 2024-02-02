//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        for(int i=0;i<s.size();i++){
            if((s[i] >='a' && s[i]<='z'))
                return -1;
            if(i>0 && s[i] =='-')
                return -1;
        }
        int ans=0; 
        bool flag=false;
        for(int i=0;i<s.size();i++){
            if(i==0 && s[i]=='-')
                flag=true;
            else{
                ans=ans*10 + (s[i]-'0');
            }    
        }
        if(flag==true)
            return -1*ans;
        return ans;    

    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends