/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev = NULL;
    struct ListNode *curr = head;
    struct ListNode *next = NULL;
    
    while(curr != NULL){
        //Save the next node
        next = curr->next;
        //REVERSE
        curr->next = prev;
        
        //MOVE ON
        prev = curr;
        curr = next;
    }
    
    head = prev;
    
    return head;
}