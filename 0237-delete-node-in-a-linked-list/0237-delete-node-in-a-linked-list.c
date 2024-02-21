/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode *parc = node;
    struct ListNode *prev = NULL;
    
    while(parc->next != NULL){
        prev = parc;
        parc->val = parc->next->val;
        parc = parc->next;
    }
    prev->next = NULL;
}