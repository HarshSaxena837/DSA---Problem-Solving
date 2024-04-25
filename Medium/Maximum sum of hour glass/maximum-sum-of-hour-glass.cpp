//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findMaxSum(int N, int M, vector<vector<int>> Mat) {
        // code here
         if(N<3 || M<3)
            return -1;
            int ans=0;
            for(int i=2;i<N;i++)
            {
                int sum;
                for(int j=1;j<M-1;j++)
                {
          sum=Mat[i-2][j-1]+Mat[i-2][j]+Mat[i-2][j+1]+Mat[i-1][j]+Mat[i][j-1]+Mat[i][j]+Mat[i][j+1];
                
                ans=max(sum,ans);
                }
            }
            return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, i, j;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (i = 0; i < N; i++)
            for (j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        cout << ob.findMaxSum(N, M, Mat) << "\n";
    }
}
// } Driver Code Ends