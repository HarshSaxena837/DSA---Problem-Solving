//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        int ans=0;
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        while(k>0){
            int maxCount=0;
            char maxString;
            for(auto i:mp){
                maxCount=max(maxCount,i.second);
                if(maxCount==i.second){
                    maxString=i.first;
                }
            }
            mp[maxString]--;
            k--;
        }
        for(auto i :mp){
            ans+=i.second*i.second;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends