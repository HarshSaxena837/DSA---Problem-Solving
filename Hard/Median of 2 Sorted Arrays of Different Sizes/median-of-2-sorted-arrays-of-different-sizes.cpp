//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& arr1, vector<int>& arr2)
    {
        // Your code goes here
        // double anss = 0;
        
        int i = 0;
        int j = 0;
        int m = arr1.size();
        int n = arr2.size();
        vector<int> ans(m+n);
        int k = 0;
        while(i < m && j<n){
            if(arr1[i] <= arr2[j]){
                ans[k] = arr1[i];
                i++;
                k++;
            }
            else if(arr1[i] > arr2[j]){
                ans[k] = arr2[j];
                k++;
                j++;
            }
        }
        while( i < m){
            ans[k] = arr1[i];
            i++;
            k++;
        }
        while(j < n){
            ans[k] = arr2[j];
            j++;
            k++;
        }
        int size = ans.size();
        if (size % 2 == 0) {
            return (ans[size / 2 - 1] + ans[size / 2]) / 2.0;
        } else {
            return ans[size / 2];
        }
        
        // return ans[ss];
        
        
        
        
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends