//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
        //User function Template for C++
        
        int maxProfit(vector<int>&price){
            //Write your code here..
             int buy1 = INT_MIN, sell1 = 0;

            int buy2 = INT_MIN, sell2 = 0;

 

            for (int p : price) {

                buy1 = max(buy1, - p);

                sell1 = max(sell1, buy1 + p);

                buy2 = max(buy2, sell1 - p);

                sell2 = max(sell2, buy2 + p);

            }

            return sell2;
        }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        Solution obj;
        cout<<obj.maxProfit(price)<<endl;
    }

}

// } Driver Code Ends