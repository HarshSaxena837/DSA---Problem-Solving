//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int solve(int arr[], int n, int i, vector<int>& dp){
        if(i >= n){
            return 0;
        }
        if(dp[i] != -1){
            return dp[i];
        }
        int ans = 0;
        int one = arr[i] + solve(arr, n, i+2,dp);
        
        int sc =  solve(arr, n, i+1,dp);
        
        ans = max(one, sc);
        
        return dp[i] = ans;
        
    }
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        vector<int> dp(n, -1);
        return solve(arr, n, 0, dp);
        
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends