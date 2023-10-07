class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans = LLONG_MIN;
        for(int i = 0; i<nums.size()-2; i++){
            for(int j = i+1; j<nums.size()-1; j++){
                for(int k = j+1; k<nums.size(); k++){
                    long val = (long)(nums[i] - nums[j]) *(long)nums[k];
                    if(val>ans){
                        ans = val;
                    }
                }
            }
        }
        if(ans < 0){
            return 0;
        }
        return ans;   
    }
};