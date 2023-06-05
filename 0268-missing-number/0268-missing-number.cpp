class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //    int n = nums.size();
        //     vector<bool> check(n, false);
        //     for(int i=0;i<nums.size();i++){
        //         check[nums[i]] = true;
        //     }
        //     for(int i = 0; i  < n ; i++){
        //         if(! check[i]) return i;
        //     }
        //     return n;
        // int n =  nums.size();
        int n =  nums.size();
        int sum = n*(n+1)/2;
        for(int i=0; i<nums.size(); i++){
            
            sum = sum - nums[i];


        }
        return sum; 
    }
};