/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2){
    struct ListNode *prev = NULL;
    struct ListNode *it = list1;
    struct ListNode *end = NULL;
    
    int index = 0;
    while(it != NULL && index != b+1){
        if(a == 0 && index == 0){
            list1 = list2;
        }
        else if((index + 1) == a){
            prev = it;
        }else if(it->next != NULL && index == b){
            end = it->next;
        }
        it = it->next;
        index++;
    }
    if(prev != NULL){
        prev->next = list2;
    }
    it = list2;
    while(it->next != NULL){
        it = it->next;
    }
    it->next = end;
    return list1;
}