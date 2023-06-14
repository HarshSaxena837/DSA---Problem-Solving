class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;
        vector<vector<int>> c = grid;
        for(int i = 0; i<n; i++){
            for(int j = i; j<n; j++){
                swap(grid[i][j], grid[j][i]);
            }
        }
        for(int i = 0; i<n; i++){
            for(int j=0; j<n; j++){
                if(grid[i] == c[j]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};