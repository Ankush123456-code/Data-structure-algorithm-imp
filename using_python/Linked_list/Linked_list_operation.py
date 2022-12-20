class Node:
    def __init__(self, val) -> None:
        self.val = val
        self.next = None


class LinkedList:
    def __init__(self) -> None:
        self.__head = None
        self.__len = 0

    def Add_First(self, val):
        new_node = Node(val)
        new_node.next = self.__head
        self.__head = new_node
        self.__len = self.__len+1

    def Add_Last(self, val):
        new_node = Node(val)
        if(self.__head == None):
            self.__head = new_node
        else:
            temp = self.__head
            while(temp.next != None):
                temp = temp.next
            temp.next = new_node
        self.__len = self.__len+1
        return

    def get_len(self):
        return self.__len

    def Print_Node(self):
        temp = self.__head
        while(temp != None):
            print(temp.val)
            temp = temp.next

    def del_val(self):
        self.Print_Node()
        pos = int(input("Which pos you want to delete"))
        if self.__head == None:
            print("Nothing to delete invalid Input")
        curr = self.__head
        prev = None
        idx = 0
        while(idx < pos and curr.next != None):
            prev = curr
            curr = curr.next
            idx = idx+1

        prev.next = curr.next
        print("After Deletion")
        self.Print_Node()


n = int(input("Enter number of Node you want to insert :- "))
Ls = LinkedList()
for i in range(n):
    val = int(input("Enter the value :- "))
    Ls.Add_Last(val)
Ls.del_val()
