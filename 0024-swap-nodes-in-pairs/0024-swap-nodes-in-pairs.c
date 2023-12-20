/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    
    struct ListNode* ptr1 = head;
    struct ListNode* ptr2 = head->next;
    
    while(ptr2 != NULL){
        int temp = ptr1->val;
        ptr1->val = ptr2->val;
        ptr2->val = temp;
        
        ptr1 = ptr2->next;
        if(ptr1 != NULL){
            ptr2 = ptr1->next;
        }else{
            break;
        }
    }
    
    return head;
}