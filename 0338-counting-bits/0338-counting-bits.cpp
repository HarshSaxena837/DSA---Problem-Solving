class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;

        for(int i = 0; i<=n; i++){
            int sum = 0;
            int temp = i;

            while(temp !=0){
                sum += temp%2;
                temp = temp/2;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};