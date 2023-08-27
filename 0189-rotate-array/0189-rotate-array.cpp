class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        int s = 0;
        int e = n-k-1;
        while(s<=e){
            swap(nums[s], nums[e]);
            s++;
            e--;
        }
        s = n-k;
        e = n-1;
        while(s<=e){
            swap(nums[s], nums[e]);
            s++;
            e--;
        }
        s = 0;
        e = n-1;
        while(s<=e){
            swap(nums[s], nums[e]);
            s++;
            e--;
        }
    }
};