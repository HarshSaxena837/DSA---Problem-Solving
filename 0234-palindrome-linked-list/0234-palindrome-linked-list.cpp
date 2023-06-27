/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> ans;
        ListNode* temp = head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp = temp->next;
        }
        int start = 0;
        int end = ans.size() - 1;
        while(start<=end){
            if(ans[start] == ans[end]){
                start++;
                end--;
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};