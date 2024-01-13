class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> mp;
        unordered_map<char,int> mp2;

        for(auto x : s){
            mp[x]++;
        }
        for(auto x : t){
            mp2[x]++;
        }
        int cnt = 0;
        for(auto it : mp){
            if(mp2.find(it.first) != mp2.end()){
                if(mp[it.first] == mp2[it.first]){
                    cnt += mp[it.first];
                }
                else{
                    cnt+= min(mp[it.first], mp2[it.first]);
                }
            }
        }

        return s.size() -cnt;

    }
};