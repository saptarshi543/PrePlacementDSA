#geeksforgeeks solution...only function required 
def deleteNode(head, x): # Code here if head is None: return None
if x == 1:

    head = head.next
    return head

current = head
count = 1
while current is not None and count < x - 1:
    current = current.next
    count += 1

if current is None or current.next is None:
    return head

node_to_delete = current.next
current.next = node_to_delete.next
return head

