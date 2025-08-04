class Solution:
    def getKthFromLast(self, head, k):
        #code here
        fast = head
        slow = head
 
        for _ in range(k):
            if fast is None:
                return None  # k is greater than the length of the list
            fast = fast.next
 
        while fast is not None:
            fast = fast.next
            slow = slow.next
 
        return slow.data

