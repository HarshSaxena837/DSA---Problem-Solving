//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A, A+n);
        
        for(int i = 0; i<n-2; i++){
            int target = X - A[i];
            int left = i+1;
            int right = n-1;
            
            while(left < right){
                int currsum = A[left] + A[right];
                
                if(target == currsum){
                    return true;
                }
                
                else if(target > currsum){
                    left++;
                }
                else{
                    right--;
                }
            }
            
            
        }
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends