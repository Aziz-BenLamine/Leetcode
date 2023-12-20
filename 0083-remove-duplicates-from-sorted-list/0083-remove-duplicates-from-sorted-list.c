/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head == NULL) return NULL;
    if(head->next == NULL) return head;
    
    struct ListNode* curr1 = head;
    struct ListNode* curr2 = NULL;
    struct ListNode* duplicate = NULL;
    
    while(curr1 != NULL && curr1->next != NULL){
        curr2 = curr1;
        while(curr2->next != NULL){
            if(curr1->val == curr2->next->val){
                duplicate = curr2->next;
                curr2->next = curr2->next->next;
                free(duplicate);
            }else{
                curr2 = curr2->next;
            }
        }
        curr1 = curr1->next;
    }
    return head;
}