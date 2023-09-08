class Solution {
public:
    vector<int> generateRow(int row){
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for(int col = 1; col<row; col++){
            ans = ans * (row - col);
            ans = ans/col;
            ansRow.push_back(ans);
        }
        return ansRow;
    }
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> res;
        int i,j,k;
        for(i=0;i<numRows;i++)
        {
            vector<int> temp;
            for(j=0;j<=i;j++)
            {
                if(j==0 || j == i)
                {
                    temp.push_back(1);
                }
                else
                {
                    k=res[i-1][j]+res[i-1][j-1];
                    temp.push_back(k);
                }

            }
            
            res.push_back(temp);
        }
        return res;
    }
};