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

    bool check(TreeNode* a, TreeNode* b){
        if(a != NULL && b!= NULL){
            bool left = check(a->left, b->right);
            bool right = check(a->right, b->left);

            if((a->val == b->val) && left && right){
                return true;
            }
            else{
                return false;
            }

        }
        else if(a== NULL && b == NULL){
            return true;
        }
        else{
            return false;
        }
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL){
            return true;
        }

        return check(root->left, root->right);

    }
};