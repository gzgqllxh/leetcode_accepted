/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head=NULL, *tail=NULL;
        int add=0, s;
        while(l1 || l2 || add) {
            s = 0;
            if (l1) { 
                s += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                s += l2->val;
                l2 = l2->next;
            }
            s += add;
            add = s/ 10;
            s = s%10;
            ListNode *temp = new ListNode(s);
            if (head == NULL)
                head = tail = temp;
            else {
                tail->next = temp;
                tail = temp;
            }
        }
        return head;
    }
};
