//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here 
	    unordered_map<char, int> mp;
	    
	    for(char& ch : s){
	        mp[ch]++;
	    }
	    
	    int mini = INT_MAX;
	    int maxi = INT_MIN;
	    
	    for(auto it : mp){
	        maxi = max(it.second, maxi);
	        mini = min(it.second, mini);
	    }
	    
	    if(maxi == mini) return true;
	    
	    if(maxi - mini == 1){
	        if(mini == 1)
	            return true;
	            
	       
	        int cnt = 0;
	        for(auto it : mp){
	            if(it.second == maxi){
	                cnt++;
	            }
	        }
	        
	        
	        if(cnt > 1){
	            return false;
	        }
	        
	        
	        else{
	            return true;
	        }
	            
	            
	    }
	    
	    return false;
	    
	    
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends