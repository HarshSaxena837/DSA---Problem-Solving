class Solution {
public:
    void solve(int indx, vector<int>& ds, vector<vector<int>>& ans,vector<int>& candidates, int target){
        // base case
        if(indx == candidates.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }

        // including the elements
        if(candidates[indx] <= target){
            ds.push_back(candidates[indx]);
            solve(indx, ds, ans, candidates, target - candidates[indx]);
            ds.pop_back();
        }

        // excluding the elements 
        solve(indx+1, ds, ans, candidates, target);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        solve(0, ds, ans, candidates, target);
        return ans;
    }
};