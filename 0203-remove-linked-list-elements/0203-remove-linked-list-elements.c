struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* prec = NULL;
    struct ListNode* curr = head;
    struct ListNode* temp = NULL;
    
    while(curr != NULL){
        if(curr->val == val){
            if(prec == NULL){
                temp = curr;
                curr = curr->next;
                head = curr;
                free(temp);
            }
            else if(curr->next == NULL){
                temp = curr;
                prec->next = NULL;
                free(temp);
                break;
            }else{
                temp = curr;
                prec->next = curr->next;
                curr = curr->next;
                free(temp);
            }
        }
        else {
            prec = curr;
            curr = curr->next;
        }
    }
    return head;
}
