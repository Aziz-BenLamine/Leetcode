/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

// 2 POINTERS METHOD
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    if(head == NULL) return NULL;
    
    struct ListNode *firstPtr = head;
    struct ListNode *secondPtr = head;
    
    //Moving the second point n nodes ahead
    for(int i = 0; i < n; i++){
        if(secondPtr == NULL){
            return head;
        }
        secondPtr = secondPtr->next;
    }
    
    
    //EDGE CASE HANDLING
    if(secondPtr == NULL){
        struct ListNode *newHead = head->next;
        free(head);
        return newHead;
    }
    
    while(secondPtr->next != NULL){
        firstPtr = firstPtr->next;
        secondPtr = secondPtr->next;
    }
    
    firstPtr->next = firstPtr->next->next;
    
    return head;
}