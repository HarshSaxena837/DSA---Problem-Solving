class Solution {
public:
    int triangularSum(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        int n  =  nums.size() - 1;
        vector<int>ans(nums.size());
        for(int i = 0; i<nums.size(); i++){
            ans[i] = nums[i];
        }

        while(n>=1){
            for(int i = 0; i<n; i++){
                ans[i] += ans[i+1];
                if(ans[i]>=10){
                    ans[i] = ans[i]%10;
                }
            }
            n--;
        }
        return ans[0];
    }
};