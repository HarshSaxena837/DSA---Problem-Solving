class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;
        int r = 0;
        int currWindow = 0;
        int res = INT_MAX;
        for(r = 0; r<nums.size(); r++){
            currWindow += nums[r];

            while(currWindow >= target){
                res = min(res, r - l +1);
                currWindow = currWindow - nums[l];
                l++;
            }
        }
        if(res == INT_MAX){
            return 0;
        }
        return res;
    }
};