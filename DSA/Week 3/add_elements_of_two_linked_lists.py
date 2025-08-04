class Solution:
    def reverse(self, head):
        prev = None
        current = head
        next = None
 
        while current is not None:
            next = current.next
            current.next = prev
            prev = current
            current = next
 
        return prev
 
    def addTwoLists(self, head1, head2):
 
        head1 = self.reverse(head1)
        head2 = self.reverse(head2)
 
        sumList = None
        carry = 0
 
        #using a loop till both lists and carry gets exhausted.
        while head1 is not None or head2 is not None or carry > 0:
            newVal = carry
 
            #if nodes are left in any of the lists, we add their data in newVal.
            if head1 is not None:
                newVal += head1.data
            if head2 is not None:
                newVal += head2.data
 
            #updating carry.
            carry = newVal // 10
            newVal = newVal % 10
 
            newNode = Node(newVal)
            newNode.next = sumList
            sumList = newNode
 
            if head1:
                head1 = head1.next
            if head2:
                head2 = head2.next
 
        while sumList is not None and sumList.data == 0:
 
            temp = sumList.next
            sumList.next = None
            sumList = temp
 
        if sumList is None:
            return Node(0)
        return sumList

