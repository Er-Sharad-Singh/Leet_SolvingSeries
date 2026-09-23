/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    int length = 0;
    struct ListNode *ptr = head;
    
   
    while (ptr != NULL) {
        length++;
        ptr = ptr->next;
    }
    
    
    for (int i = 0; i < length / 2; i++) {
        head = head->next;
    }
    
    return head;
    
}