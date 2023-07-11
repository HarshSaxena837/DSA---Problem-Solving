class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> fin;
        for(int i = 0; i<prices.size(); i++){
            for(int j = i+1; j<prices.size(); j++){
                if(prices[i]>=prices[j]){
                    prices[i] -= prices[j];
                    break;
                }
            }
            // fin.push_back(prices[i]);
        }
        return prices;
    }
};