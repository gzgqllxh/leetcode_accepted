/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode head = null, tail = null;
        int add = 0, s;
        while (l1 != null || l2 != null || add != 0) {
            if (l1 != null) {
                add += l1.val;
                l1 = l1.next;
            }
            if (l2 != null) {
                add += l2.val;
                l2 = l2.next;
            }
            s = add % 10;
            add = add / 10;
            ListNode temp =  new ListNode(s);
            if (head==null) {
                head = tail = temp;
            }
            else {
                tail.next = temp;
                tail = temp;
            }
        }
        return head;
    }
}
