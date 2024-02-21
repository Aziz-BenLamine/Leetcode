/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    int res = 0;
    struct ListNode* p = head;
    while(p != NULL){
        res *= 2;
        res+= p->val;
        p = p->next;
    }
    return res;
}