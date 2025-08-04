class Solution:
    def insertAtEnd(self, head, x):
        new_node = Node(x)
        if head is None:
            return new_node
        
        # Traverse to the end of the list
        current = head
        while current.next is not None:
            current = current.next
        
        current.next = new_node
        return head
