class Solution:
    def removeLoop(self, head):
        # code here
        if not head or not head.next:
            return
 
        slow = head
        fast = head
 
        # Detect the loop
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
            if slow == fast:
                break
 
        # If no loop is found
        if slow != fast:
            return
 
        # Find the starting node of the loop
        # Case 1: Loop starts at the head
        if slow == head:
            current = head
            while current.next != head:
                current = current.next
            current.next = None
            return
 
        # Case 2: Loop starts elsewhere
        ptr1 = head
        ptr2 = slow
        while ptr1.next != ptr2.next:
            ptr1 = ptr1.next
            ptr2 = ptr2.next
        ptr2.next = None

