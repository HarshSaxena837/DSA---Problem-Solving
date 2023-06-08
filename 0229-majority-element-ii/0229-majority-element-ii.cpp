class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i= 0; i<nums.size(); i++){
            map[nums[i]]++;
        }
        vector<int> output;

        for(auto it : map){
            if(it.second>nums.size()/3){
                output.push_back(it.first);
            }
        }
        return output;
    }
};