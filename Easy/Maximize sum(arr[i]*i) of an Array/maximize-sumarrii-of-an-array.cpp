//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int Maximize(int a[],int n)
    {
        // Complete the function
        int MOD = 1000000007;
        sort(a, a+n);
        if(n == 1){
            return 0;
        }
        unsigned long long ans = 0;
        for(unsigned long long i = 0; i<n; i++){
            ans += a[i] * i;
        }
        
        return ans%MOD;
    }
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends