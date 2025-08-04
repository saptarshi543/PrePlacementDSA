class Solution:
    def searchKey(self, n, head, key):
        #Code here
        current = head
        while current is not None:
            if current.data == key:
                return True  # Key found
            current = current.next
        return False

