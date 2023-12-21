/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int gcd_calc(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

struct ListNode* insertGreatestCommonDivisors(struct ListNode* head){
    if (head == NULL || head->next == NULL) {
        return head;
    }
    
    struct ListNode* curr = head;
    struct ListNode* nextNode = curr->next;

    while(curr!=NULL && nextNode != NULL){
        int gcd = gcd_calc(curr->val, nextNode->val);
        
        //Inserting the gcdNode
        struct ListNode* gcdNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        curr->next = gcdNode;
        gcdNode->val = gcd;
        gcdNode->next = nextNode;
        
        //Moving
        curr = nextNode;
        nextNode = nextNode->next;
    }
    
    return head;
}