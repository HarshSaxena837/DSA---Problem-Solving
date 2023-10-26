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
void preorderbro(TreeNode* node,vector<int>&ans){
        if(node==NULL)return;
        ans.push_back(node->val);
        preorderbro(node->left,ans);
        preorderbro(node->right,ans);
    }
    void flatten(TreeNode* root) {
        if(root==NULL)return;
        TreeNode* p=root;
        vector<int>ans;
        preorderbro(root,ans);
        int n = ans.size()-1;
        int i=1;
        while(n--){
            TreeNode* node=new TreeNode(ans[i]);
            root->right=node;
            root->left=NULL;
            root=root->right;
            i++;
        }
    }
};