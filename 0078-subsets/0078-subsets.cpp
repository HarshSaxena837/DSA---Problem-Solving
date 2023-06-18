class Solution {
    private:
        void solve(vector<int> output, vector<int>& nums, int ind,vector<vector<int>>& ans ){
            if(ind >= nums.size()){
                ans.push_back(output);
                return;
            }
            solve(output,nums,ind+1,ans);

            output.push_back(nums[ind]);
            solve(output,nums,ind+1,ans);
        }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int ind = 0;
        solve(output, nums, ind, ans);
        return ans;
    }
};