class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int> store;
        int product = 1;
        int sum = 0;
        int digit;
        while(n){
            digit = n % 10;
            product *= digit;
            sum += digit;
            n = n/10;
        }
        int ans = product - sum;
        return ans;
    }
};