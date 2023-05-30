class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> map;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            map[nums[i]]++;
        }
        vector<int> ans;
        for(int i=1; i<=nums.size(); i++){
            if(map[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};