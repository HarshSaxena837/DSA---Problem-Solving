class Solution {
    private:
        void solve(vector<int> nums, vector<vector<int>>& ans, int index){
            if(index>=nums.size()){
                ans.push_back(nums);
                return;
            }
            unordered_set<int> st;
            for(int i = index; i<nums.size(); i++){
                if(st.count(nums[i])==1){
                    continue;
                }
                st.insert(nums[i]);
                swap(nums[index],nums[i]);
                solve(nums,ans,index+1);

                swap(nums[index],nums[i]);
            }
        }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        set<int> st;
        solve(nums,ans,index);
        // st.insert(ans);

        return ans;
    }
};