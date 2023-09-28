class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n=nums.size();
    int ans=n;
    for(int i=1;i<n;i++)
    {
        if(nums[i]<nums[i-1])
        {
            if(ans!=n) return -1;
            else ans=i;
        }
    }
    if(ans!=n && nums.back()>nums[0]) return -1;
    return n-ans;
    }
};