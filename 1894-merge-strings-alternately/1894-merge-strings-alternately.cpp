class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        string fin;
        while(i<word1.length() && j<word2.length()){
            fin.push_back(word1[i]);
            fin.push_back(word2[j]);
            i++;
            j++;
        }
        while(i<word1.length()){
            fin.push_back(word1[i]);
            i++;
        }
        while(j<word2.length()){
            fin.push_back(word2[j]);
            j++;
        }
        return fin;
    }
};