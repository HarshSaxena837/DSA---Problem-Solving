class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size()<=1){
            return nums.size();
        }
        int ans = 1;
        int cnt = 1;
        for(int i = 0; i<nums.size()-1; i++){
            if(nums[i] < nums[i+1]){
                cnt++;
                ans = max(cnt, ans);
            }
            else{
                cnt = 1;
            }
        }
        return ans;
    }
};