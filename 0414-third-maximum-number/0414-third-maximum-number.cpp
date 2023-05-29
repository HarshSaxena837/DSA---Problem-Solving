class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if(n<3){
            return nums[n-1];
        }
        int unique = 0;
        for(int i=0; i<n; i++){
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            nums[unique] = nums[i];
            unique++;
        }
        if(unique<3){
            return nums[unique-1];
        }
        else{
            return nums[unique-3];
        }

        
    }
};