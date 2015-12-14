# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        add = 0
        head = tail = None
        while l1 != None or l2 != None or add != 0:
            if l1 != None:
                add += l1.val
                l1 = l1.next
            if l2 != None:
                add += l2.val
                l2 = l2.next
            s = add % 10
            add = add / 10
            if head == None:
                head = tail = ListNode(s)
            else:
                tail.next = ListNode(s)
                tail = tail.next
        return head
            
