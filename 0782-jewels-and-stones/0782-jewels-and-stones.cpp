class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt = 0;
        unordered_map<char,int> map;
        for(int i = 0; i<stones.length(); i++){
            map[stones[i]]++;
        }
        for(auto it : map){
            for(int i = 0 ; i<jewels.length(); i++){
                if(jewels[i] ==  it.first){
                    cnt += it.second;
                }
            }
            
        }
        return cnt;
    }
};