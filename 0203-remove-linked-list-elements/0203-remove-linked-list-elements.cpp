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
    // ListNode* solve(ListNode* &head, int val){
    //     if(head == NULL){
    //         return head;
    //     }

    //     ListNode* prev = NULL;
    //     ListNode* curr = head;
    //     while(curr != NULL){
    //         prev->next = curr->next;
    //         curr->next = NULL;
    //         delete curr;
    //         // s
    //     }
    // }
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL){
            return head;
        }
        while(head != NULL && head -> val == val){
            head = head->next;
        }
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr!= NULL){
            if(curr->val == val){
                prev->next = curr->next;
                curr = curr->next; 
            }
            else{
                prev = curr;
                curr= curr->next;
            }
        }
        return head;
        
    }
};