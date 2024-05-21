//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
        vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        vector<int>res;
        auto cmp = [x](int a, int b) {
            if (std::abs(a - x) == std::abs(b - x)) {
                return a > b;
            }
            return std::abs(a - x) < std::abs(b - x);
        };

        sort(arr.begin(), arr.end(), cmp);
        for(int i=0;i<n;i++){
            if(arr[i]==x)continue;
            res.push_back(arr[i]);
            if(res.size()==k)break;
        }
        return res;
    }

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends