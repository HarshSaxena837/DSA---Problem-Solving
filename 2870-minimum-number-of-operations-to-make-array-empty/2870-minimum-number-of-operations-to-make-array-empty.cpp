class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i : nums){
            mp[i]++;
        }
        int cnt = 0;
        for(auto it : mp){
            int t = it.second;
            if(t == 1){
                return -1;
            }
            cnt += t/3;
            if(t%3){
                cnt++;
            }
        }
        return cnt;
    }
};