class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) { 
        int fin = 0;
        for(int i = 0; i<timeSeries.size()-1; i++){
            fin += min(timeSeries[i+1] - timeSeries[i], duration );
        }
        return fin+duration;
    }
};