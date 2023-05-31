class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        // map<int, int> map;
        // for(int i=0 ; i<nums.size(); i++){
        //     map[nums[i]]++;
        // }
        // for(auto it: map){
        //     if(it.second> nums.size()/2){
        //         return it.first;
        //     }
        // }
        // return -1;
        int cnt = 0;
        int element;
        for(int i=0; i<nums.size(); i++){
            if(cnt == 0){
                cnt = 1;
                element = nums[i];
            }
            else if(element == nums[i]){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1 = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == element){
                cnt1++;
            }
            if(cnt1>nums.size()/2){
                return element;
            }
        }
        return -1;
    }

};