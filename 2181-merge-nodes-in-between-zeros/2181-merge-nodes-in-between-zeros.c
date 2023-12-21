/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeNodes(struct ListNode* head) {
    if (head == NULL || head->next == NULL) return head;

    struct ListNode* curr = head;
    
    // Initializing the new List
    struct ListNode* newList = NULL;
    struct ListNode* tail = NULL;  // To keep track of the tail of the new list

    int sum = 0;
    while (curr != NULL) {
        if (curr->val != 0) {
            sum += curr->val;
        } else {
            // Create a new node only if the sum is non-zero
            if (sum != 0) {
                struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
                newNode->val = sum;
                newNode->next = NULL;

                // If the new list is empty, set the head and tail to the new node
                if (newList == NULL) {
                    newList = newNode;
                    tail = newNode;
                } else {
                    // Otherwise, add the new node to the end of the new list
                    tail->next = newNode;
                    tail = newNode;
                }

                sum = 0;  // Reset the sum for the next sequence of non-zero values
            }
        }

        curr = curr->next;
    }

    // If there's a remaining sum after the last non-zero sequence
    if (sum != 0) {
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = sum;
        newNode->next = NULL;

        if (newList == NULL) {
            newList = newNode;
        } else {
            tail->next = newNode;
        }
    }

    return newList;
}
