class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftsum;
        vector<int> rightsum;
        int sum = 0;
        int sum1 = 0 ;
        for(int i=0; i<n; i++){
            leftsum.push_back(sum);
            sum += nums[i];
        }
        for(int i=n-1; i>=0; i--){
            rightsum.push_back(sum1);
            sum1 += nums[i];
        }

        reverse(rightsum.begin(), rightsum.end());

        vector<int> ans;
        for(int i=0; i<n; i++){
            int fin = abs(leftsum[i] - rightsum[i]);
            ans.push_back(fin);
        }
        return ans;
    }
};