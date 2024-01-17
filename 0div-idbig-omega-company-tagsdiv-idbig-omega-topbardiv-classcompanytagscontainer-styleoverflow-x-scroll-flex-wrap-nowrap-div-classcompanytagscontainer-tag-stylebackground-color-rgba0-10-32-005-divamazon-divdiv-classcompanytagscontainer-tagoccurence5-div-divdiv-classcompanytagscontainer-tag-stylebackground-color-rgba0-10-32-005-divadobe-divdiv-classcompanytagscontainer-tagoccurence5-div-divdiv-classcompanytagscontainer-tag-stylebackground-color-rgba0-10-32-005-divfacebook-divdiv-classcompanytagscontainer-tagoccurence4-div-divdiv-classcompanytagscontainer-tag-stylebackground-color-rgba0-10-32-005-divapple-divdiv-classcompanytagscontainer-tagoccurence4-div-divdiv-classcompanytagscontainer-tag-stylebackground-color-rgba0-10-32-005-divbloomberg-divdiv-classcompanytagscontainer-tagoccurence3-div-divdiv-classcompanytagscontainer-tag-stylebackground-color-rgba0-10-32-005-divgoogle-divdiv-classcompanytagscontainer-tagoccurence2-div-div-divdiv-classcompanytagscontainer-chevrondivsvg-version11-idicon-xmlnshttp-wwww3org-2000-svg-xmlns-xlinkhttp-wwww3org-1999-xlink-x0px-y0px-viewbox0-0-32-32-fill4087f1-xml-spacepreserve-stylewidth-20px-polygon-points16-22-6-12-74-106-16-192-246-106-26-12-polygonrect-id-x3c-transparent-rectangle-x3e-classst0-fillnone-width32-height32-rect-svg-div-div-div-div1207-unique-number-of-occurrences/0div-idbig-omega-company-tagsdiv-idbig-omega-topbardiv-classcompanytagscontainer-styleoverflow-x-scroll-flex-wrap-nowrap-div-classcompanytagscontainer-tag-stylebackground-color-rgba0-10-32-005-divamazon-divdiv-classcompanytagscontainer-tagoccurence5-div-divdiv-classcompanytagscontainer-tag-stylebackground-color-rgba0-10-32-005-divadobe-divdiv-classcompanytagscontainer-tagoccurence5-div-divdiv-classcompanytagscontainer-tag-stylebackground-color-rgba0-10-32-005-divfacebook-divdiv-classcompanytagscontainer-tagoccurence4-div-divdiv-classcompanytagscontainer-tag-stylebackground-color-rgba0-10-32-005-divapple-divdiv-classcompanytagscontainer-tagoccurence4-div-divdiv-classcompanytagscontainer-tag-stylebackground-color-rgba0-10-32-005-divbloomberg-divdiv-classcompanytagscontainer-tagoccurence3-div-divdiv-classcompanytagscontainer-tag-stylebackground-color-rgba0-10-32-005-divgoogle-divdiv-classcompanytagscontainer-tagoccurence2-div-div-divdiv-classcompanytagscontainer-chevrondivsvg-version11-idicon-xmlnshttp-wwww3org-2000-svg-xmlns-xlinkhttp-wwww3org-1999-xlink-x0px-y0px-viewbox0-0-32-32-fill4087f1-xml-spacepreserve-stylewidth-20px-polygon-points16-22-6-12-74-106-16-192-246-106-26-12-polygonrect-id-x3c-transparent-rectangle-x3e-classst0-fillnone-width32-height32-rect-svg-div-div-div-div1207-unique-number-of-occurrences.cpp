class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int i = 0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        vector<int> temp;
        for(auto it : mp){
            temp.push_back(it.second);
        }

        unordered_map<int, int> fin;
        for(int i = 0; i<temp.size(); i++){
            fin[temp[i]]++;
        }

        for(auto it : fin){
            if(it.second > 1){
                return false;
            }
        }
        return true;
    }
};