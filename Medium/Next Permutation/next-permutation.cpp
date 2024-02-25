//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        int index = -1;
        vector<int> ans;
        for(int i = N-1; i>=0; i--){
            if(arr[i] > arr[i-1]){
                index = i-1;
                break;
            }
        }
        if(index == -1){
            reverse(arr.begin(), arr.end());
            return arr;
        }
        if(index != -1){
            
            int swap_ind = index;
            
            for(int i = N-1; i>=index+1; i--){
                if(arr[i] > arr[index]){
                    swap_ind = i;
                    break;
                }
            }
            
            swap(arr[index], arr[swap_ind]);
            
        }
        reverse(arr.begin() + index + 1  , arr.end());
        for(int i = 0; i<N;i++){
            ans.push_back(arr[i]);
        }
        
        return ans;
        
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends