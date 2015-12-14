/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *head = NULL, *tail = NULL;
    int add = 0, s;
    while (l1 != NULL || l2 != NULL || add != 0) {
        if (l1 != NULL) {
            add += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            add += l2->val;
            l2 = l2->next;
        }
        s = add % 10;
        add = add / 10;
        struct ListNode * temp = (struct ListNode*) malloc(sizeof(struct ListNode));
        temp->val = s;
        temp->next = NULL;
        if (head == NULL) {
            tail = head = temp;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
    }
    return head;
}
