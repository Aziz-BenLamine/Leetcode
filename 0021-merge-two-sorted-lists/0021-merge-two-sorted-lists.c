/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode dummy;
    struct ListNode *result = &dummy;
    
    while(list1 != NULL && list2 != NULL){
        if(list1->val > list2->val){
            result->next = list2;
            list2 = list2->next;
        }else{
            result->next = list1;
            list1 = list1->next;
        }
        
        result = result->next;
    }
    
    if(list1==NULL){
        result->next = list2;
    }else{
        result->next = list1;
    }
    
    return dummy.next;
}