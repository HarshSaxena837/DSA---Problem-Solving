//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int solve(int n){
            // base case
            if(n == 0){
                return 0;
            }
            int x  = max(n/2, solve(n/2));
            int y  = max(n/3, solve(n/3));
            int z  = max(n/4, solve(n/4));
            
            return max(n, x + y + z);
        }
        int maxSum(int n)
        {
            //code here.
            return solve(n);
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends