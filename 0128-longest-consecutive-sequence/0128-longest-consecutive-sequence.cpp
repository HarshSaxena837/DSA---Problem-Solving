class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // set < int > hashSet;
        // for (int num: nums) {
        //     hashSet.insert(num);
        // }

        // int longestStreak = 0;

        // for (int num: nums) {
        //     if (!hashSet.count(num - 1)) {
        //     int currentNum = num;
        //     int currentStreak = 1;

        //     while (hashSet.count(currentNum + 1)) {
        //         currentNum += 1;
        //         currentStreak += 1;
        //     }

        //     longestStreak = max(longestStreak, currentStreak);
        //     }
        // }

        // return longestStreak;
        int n =  nums.size();
        if(n == 0){
            return 0;
        }
        int longest = 1;
        unordered_set<int> st;
        for(int i = 0; i<n; i++){
            st.insert(nums[i]);
        }

        for(auto it : st){
            if(st.find(it - 1)==st.end()){
                int cnt = 1;
                int x = it;
                while(st.find(x+1) != st.end()){
                    x = x+1;

                    cnt = cnt+1;
                }
                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};