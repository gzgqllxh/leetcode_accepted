/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function(l1, l2) {
    var head = null, tail = null
    var add = 0
    while(l1!==null || l2!==null || add!==0) {
        if(l1!==null){
            add+=l1.val
            l1=l1.next
        }
        if(l2!==null){
            add+=l2.val
            l2=l2.next
        }
        s=add%10
        add=parseInt(add/10)
        if(head===null){
            head=tail=new ListNode(s)
        }
        else{
            tail.next=new ListNode(s)
            tail=tail.next
        }
    }
    return head
};
