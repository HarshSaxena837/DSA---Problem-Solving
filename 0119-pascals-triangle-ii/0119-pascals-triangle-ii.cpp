class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ret { 1 }, cur { 1 };
	for (int i = 1; i <= rowIndex; i++) {
		ret.push_back(1);
		for (int j = 1; j < i; j++) {
			ret[j] = cur[j] + cur[j - 1];
		}
		cur = ret;
	}
	return ret;
    }
};