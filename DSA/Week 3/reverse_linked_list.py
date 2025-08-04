class Solution:
    def reverseList(self, head):
        # Code here
        prev = None
        current = head
 
        while current is not None:
            next_node = current.next  # Store the next node
            current.next = prev       # Reverse the current node's pointer
            prev = current            # Move prev to current node
            current = next_node       # Move current to the next node
 
        return prev

