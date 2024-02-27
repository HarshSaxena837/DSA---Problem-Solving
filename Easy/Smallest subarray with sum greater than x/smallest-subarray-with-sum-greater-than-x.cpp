//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here
         if(n==1){
            if(arr[0] > x){
                return 1;
            }
            else{
                return 0;
            }
        }
        int wholeSum = 0;
        for(int i=0; i<n; i++){
            wholeSum += arr[i];
        }
        
        if(wholeSum < x){
            return 0;
        }
        int mis = INT_MAX;
        int s = 0;
        int i = 0;
        int j = 0;
        while(i < n && j < n){
            s += arr[j];
            
            if(s > x){
                mis = min(mis, j-i+1);
                s = 0;
                i++;
                j = i;
            }
            else{
                j++;
            }
        }
        
        return mis;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends