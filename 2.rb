# Definition for singly-linked list.
# class ListNode
#     attr_accessor :val, :next
#     def initialize(val)
#         @val = val
#         @next = nil
#     end
# end

# @param {ListNode} l1
# @param {ListNode} l2
# @return {ListNode}
def add_two_numbers(l1, l2)
    tail, head = nil, nil
    add = 0
    while l1!=nil or l2!=nil or add!=0 do
        if l1!=nil
            add+=l1.val
            l1=l1.next
        end
        if l2!=nil
            add+=l2.val
            l2=l2.next
        end
        s = add%10
        add = add/10
        if head == nil
            head=tail=ListNode.new(s)
        else
            tail.next=ListNode.new(s)
            tail=tail.next
        end
    end
    return head
end
