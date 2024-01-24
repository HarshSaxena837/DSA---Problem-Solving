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
    void solve(TreeNode* root, int& count, vector<int>& temp){
        if(root == NULL){
            return;
        }
        temp[root->val]++;
        solve(root->left, count, temp);
        solve(root->right, count, temp);
        if(root->left == NULL && root->right == NULL){
            int check = 0;
            for(int i = 1; i<=9; i++){
                if(temp[i]%2 != 0){
                    check++;
                }
            }
            if(check<=1){
                count++;
            }
        }
        temp[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        int count = 0;
        vector<int> temp(10, 0);
        solve(root, count, temp);
        return count;
    }
};