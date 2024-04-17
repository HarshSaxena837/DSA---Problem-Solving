//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
     int merge(int lo, int mid, int hi, vector<int>& v) {
    int cnt = 0;
    int left = lo;
    int right = mid + 1;
    vector<int> temp;
    
    while (left <= mid && right <= hi) {
        if (v[left] <= v[right]) {
            temp.push_back(v[left]);
            left++;
        } else {
            temp.push_back(v[right]);
            cnt += mid - left + 1;
            right++;
        }
    }
    
    while (left <= mid) {
        temp.push_back(v[left]);
        left++;
    }
    
    while (right <= hi) {
        temp.push_back(v[right]);
        right++;
    }
    
    for (int i = lo, j = 0; i <= hi; i++, j++) {
        v[i] = temp[j];
    }
    
    return cnt;
}

    int mergeSort(int lo, int hi, vector<int>& v) {
        int cnt = 0;
        if (lo >= hi) return cnt;
        int mid = (hi + lo) / 2;
        cnt += mergeSort(lo, mid, v);
        cnt += mergeSort(mid + 1, hi, v);
        cnt += merge(lo, mid, hi, v);
        return cnt;
    }
    
    int countPairs(int arr[] , int n ) 
    {
        // Your code goes here 
        vector<int>v(n);
        for(int i=0;i<n;i++){
            v[i]=arr[i]*i;
        }
        return mergeSort(0, n-1, v);
    }


};

//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	Solution ob;
    	cout<<ob.countPairs(a, n)<<endl;
    }
}
// } Driver Code Ends