class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans = 0;
        for(int i = low; i<=high; i++){
            string st = to_string(i);
            int temp = 0;
            int n = st.size();
            for(int j = 0; j<n/2; j++){
                temp += st[j] - st[n - j -1];
            }
            if(n % 2 == 0 && temp == 0){
                ans++;
            }
        }
        return ans;
    }
};