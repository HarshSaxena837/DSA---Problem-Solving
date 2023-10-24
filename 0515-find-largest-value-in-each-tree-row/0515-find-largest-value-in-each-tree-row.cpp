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
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans ;
        queue<TreeNode*> q;
        q.push(root);
        if(root == NULL){
            return ans;
        }

        while(1){
            int size = q.size();
            if(size==0){
                return ans;
            }
            vector<int> data;
            while(size>0){
                TreeNode* temp = q.front();
                q.pop();
                data.push_back(temp->val);

                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
                size--;
            }
            int maxi = INT_MIN;
            for(int i = 0; i<data.size(); i++){
                if(data[i] > maxi){
                    maxi = data[i];
                }
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};