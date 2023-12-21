/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    struct ListNode* newHead = NULL;
    
    while(curr != NULL){
        struct ListNode* nextNode = curr->next;
        while(nextNode != NULL && curr->val == nextNode->val){
            nextNode = nextNode->next;
        }
        
        if(curr->next == nextNode){
            if(prev == NULL){
                newHead = curr;
            }else{
                prev->next = curr;
            }
            
            prev = curr;
        }
        else{
            while(curr != nextNode){
                struct ListNode* duplicate = curr;
                curr = curr->next;
                free(duplicate);
            }
        }
        
        curr = nextNode;
    }
    if(prev != NULL){
            prev->next = NULL;
        }
    return newHead;
}