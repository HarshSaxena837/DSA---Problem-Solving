//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    vector<long long> getleftMax(int arr[], int n){
        vector<long long> left(n);
        
        left[0] = arr[0];
        for(int i = 1; i<n; i++){
            left[i] = max(left[i-1], (long long)arr[i]);
        }
        return left;
    }
    
    vector<long long> getrightMax(int arr[], int n){
        vector<long long> right(n);
        right[n-1] = arr[n-1];
        for(int i = n-2; i>=0; i--){
            right[i] = max(right[i+1], (long long)arr[i]);
        }
        
        return right;
    }
    long long trappingWater(int arr[], int n){
        // code here
        
        vector<long long> leftmax = getleftMax(arr, n);
        vector<long long> rightmax = getrightMax(arr, n);
        
        long long W = 0;
        
        for(int i = 0; i<n; i++){
            long long sum = min(leftmax[i], rightmax[i]) - arr[i];
            
            W += sum;
        }
        
        return W;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends