class Solution: 
def insertInMiddle(self, head, x): #code here 
	new_node = Node(x) 
	if head is None or head.next is None:
	new_node.next = head return new_node
    slow_ptr = head
    fast_ptr = head
    prev_slow = None

    while fast_ptr is not None and fast_ptr.next is not None:
       prev_slow = slow_ptr
        slow_ptr = slow_ptr.next
        fast_ptr = fast_ptr.next.next

    if fast_ptr is None: # Even number of nodes
        prev_slow.next = new_node
        new_node.next = slow_ptr
    else: # Odd number of nodes
        new_node.next = slow_ptr.next
        slow_ptr.next = new_node

    return head


