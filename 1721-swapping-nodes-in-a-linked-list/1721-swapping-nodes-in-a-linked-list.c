/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* swapNodes(struct ListNode* head, int k){
    struct ListNode *first = head;
    struct ListNode *second = head;
    struct ListNode *temp = head;
    
    for(int i = 1; i < k; i++) {
        first = first->next;
    }
    
    temp = first;
    
    while(temp->next != NULL) {
        temp = temp->next;
        second = second->next;
    }
    
    int tempVal = first->val;
    first->val = second->val;
    second->val = tempVal;
    
    return head;
}
