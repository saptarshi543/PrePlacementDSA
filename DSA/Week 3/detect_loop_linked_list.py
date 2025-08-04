class Solution:
    #Function to check if the linked list has a loop.
    def detectLoop(self, head):
        #code here
        if head is None or head.next is None:
            return False  
        slow = head
        fast = head
        while fast is not None and fast.next is not None:
            slow = slow.next 
            fast = fast.next.next 
            if slow == fast:
                return True  # Loop detected if pointers meet
        return False

