/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode AddTwoNumbers(ListNode l1, ListNode l2) {
        ListNode head=null, tail=null;
        int add=0, s;
        while(l1!=null || l2!=null || add!=0) {
            if(l1!=null){
                add+=l1.val;
                l1=l1.next;
            }
            if(l2!=null){
                add+=l2.val;
                l2=l2.next;
            }
            s=add%10;
            add=add/10;
            if(head==null){
                head=tail=new ListNode(s);
            }
            else{
                tail.next=new ListNode(s);
                tail=tail.next;
            }
        }
        return head;
    }
}
