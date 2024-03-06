//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int> ans;
        int f = -1;
        int s = -1;
        bool c1 = false;
        bool c2 = false;
        for(int i = 0; i<n; i++){
            if(arr[i] == x){
                c1 = true;
                f = i;
                ans.push_back(f);
                break;
            }
        }
        
        for(int i = n-1; i>=0; i--){
            if(arr[i] == x){
                c2 = true;
                s = i;
                ans.push_back(s);
                break;
            }
        }
        
        if(!c1 && !c2){
            ans.push_back(-1);
            ans.push_back(-1);
        }
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
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends