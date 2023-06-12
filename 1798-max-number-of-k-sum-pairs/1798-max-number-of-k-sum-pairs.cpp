class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int cnt = 0;
        int start = 0;
        int end = nums.size()-1;
        while(start<end){
            if(nums[start] + nums[end] == k){
                start++;
                end--;
                cnt++;
            }
            else if(nums[start] + nums[end] > k){
                end--;
            }
            else{
                start++;
            }
        }
        return cnt;
    }
};