class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int ans ;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == original){
                ans = 2 * original;
                return findFinalValue(nums, ans);
            }
        }
        return original;
    }
};