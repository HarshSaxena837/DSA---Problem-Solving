//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends


#include<vector>
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    vector<int> findleft(int arr[], int n){
        vector<int> leftmax(n);
        leftmax[0] = arr[0];
        for(int i = 1; i<n; i++){
            leftmax[i] = max(leftmax[i-1], arr[i]);
        }
        
        return leftmax;
        
    }
    vector<int> findright(int arr[], int n){
        vector<int> rightmax(n);
        rightmax[n-1] = arr[n-1];
        for(int i = n-2; i>=0; i--){
            rightmax[i] = max(rightmax[i+1], arr[i]);
        }
        
        return rightmax;
        
    }
    long long trappingWater(int arr[], int n){
        // code here
        vector<int> leftmax = findleft(arr, n);
        vector<int> rightmax = findright(arr, n);
        long long  w = 0;
        for(int i = 0; i<n; i++){
            int sum = min(leftmax[i], rightmax[i]) - arr[i];
            
            w += sum;
        }
        
        return w;
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