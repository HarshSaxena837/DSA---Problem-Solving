/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root, int& cnt, vector<int> &temp){
//         base case
        if(root == NULL){
            return;
        }
        temp[root->val]++;
        solve(root->left, cnt, temp);
        solve(root->right, cnt, temp);
        if(root->left == NULL && root->right == NULL){
            int flag = 0;
            for(int i = 1; i<=9; i++){
                if(temp[i] % 2 != 0){
                    flag++;
                }
            }
            if(flag <= 1){
                cnt++;
            }
        }
        temp[root->val]--;

    }
    int pseudoPalindromicPaths (TreeNode* root) {
        int cnt = 0;
        vector<int> temp(10, 0);
        solve(root, cnt, temp);
        return cnt;
    }
};