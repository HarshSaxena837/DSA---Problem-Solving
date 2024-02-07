//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    void mul(vector<int>& nums, int& size, int multiplier){
        int carry = 0;
        
        for(int i = 0; i<size; i++){
            int res = multiplier*nums[i];
            
            res = res+carry;
            
            nums[i] = res%10;
            
            carry = res/10;
        }
        
        while(carry > 0){
            nums[size] = carry% 10;
            size++;
            
            carry = carry/10;
            
        }
    }
    vector<int> factorial(int N){
        // code here
        
        vector<int> nums(10000, 0);
        
        nums[0] = 1;
        
        int size = 1;
        
        for(int multiplier = 2; multiplier<=N; multiplier++){
            mul(nums, size, multiplier);
        }
        
        vector<int> res;
        for(int i = size-1; i>=0; i--){
            res.push_back(nums[i]);
        }
        
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends