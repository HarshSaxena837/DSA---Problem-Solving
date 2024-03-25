//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      sort(arr, arr+n);
      int cntc = 0;
      int lastmin = INT_MIN;
      
      int longest = 1;
      
      
      for(int i = 0; i<n; i++){
          if(arr[i] -1 == lastmin){
              cntc++;
              lastmin = arr[i];
              
          }
          else if(arr[i] != lastmin){
              cntc = 1;
              lastmin = arr[i];
          }
          longest = max(longest, cntc);
          
      }
      return longest;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends