class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int cnt = 0;
        vector<int> temp;
        temp = heights;
        sort(temp.begin(), temp.end());
        for(int i = 0; i<temp.size(); i++){
            if(heights[i] != temp[i]){
                cnt++;
            }
        }
        return cnt;
    }
};