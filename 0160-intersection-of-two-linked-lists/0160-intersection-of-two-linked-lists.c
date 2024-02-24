struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *la = headA;
    struct ListNode *lb = headB;
    
    while (la != lb) {
        if (la == NULL)
            la = headB;
        else
            la = la->next;
        
        if (lb == NULL)
            lb = headA;
        else
            lb = lb->next;
    }
    
    return la;
}
