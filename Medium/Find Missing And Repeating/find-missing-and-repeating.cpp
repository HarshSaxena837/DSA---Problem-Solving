//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        vector<int> ans;
        // int totalsum = n*(n+1)/2;
        
        // int sum = 0;
        // for(int i = 0; i<n; i++){
        //     sum += arr[i];
        // }
        
        // int missing = abs(totalsum - sum);
        int repeating;
        int missing;
        unordered_map<int, int> mp;
        for(int& i : arr){
            mp[i]++;
        }
        
        for(auto it : mp){
            if(it.second > 1){
                repeating = it.first;
            }
        }
        
        for(int i = 1; i<=n; i++){
            if(mp[i] == 0){
                missing = i;
            }
        }
        
        ans.push_back(repeating);
        ans.push_back(missing);
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends