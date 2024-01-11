'''
in c++
struct Node {
    int data;
    struct Node *next;
} *head = NULL;
'''

#o clasa
class Node:
    #constructorul clasei
    def __init__(self):
        self.data = None
        self.next = None

def CreateList():
    #declaram head NULL nullptr
    head = None

    #capturam de la tastatura un numar foarte mare
    str = input("Big number = ")

    #iteram prin caracterele string-ului.
    for digit in str:

        # in c++ nod_nou = new Node #alocam spatiu in HEAP pentru
        # o structura de tip struct Node

        # se creeaza un obiect de tip Node, o instanta a clasei
        # 00P
        nod_nou = Node()
        #se completeaza campul de informatii data
        #il convertim la Integer
        nod_nou.data = int( digit )
        #in c++ nod_nou->data = info
        #se completeaza zona de referinta next
        nod_nou.next = head
        #nod_nou->next = head
        #capul de lista este nod_nou
        head = nod_nou;

    return head

def display(head):
    while head:
        #in c++ head->data
        print(head.data, end = "")
        head = head.next
    print()


#
#  in c++
# reverse(struct Node *head){
        #curr = head
         #next2 = NULL;
         #prev2 = NULL;
         #while (curr!=NULL) {
         #next2 = curr.next
         #curr.next = prev2
         #prev2 = curr
         #curr = next
         #}
#}
#

#
# 1 <-- 2 <-- 3
# head = nodul care are informatia 1
#
# nodul1(data,next) ---> nodul2(data, next) ---> nodul3(data, next=NULL)
#
# head = nodul care are informatia 3
#
# nodul1(data,next=NULL) <----- nodul2(data, next) <---- nodul3(data, next)

def reverse( list ):
    
    curr = list
    next2 = None
    prev2 = None

    while curr is not None:
        next2 = curr.next
        curr.next = prev2
        prev2 = curr
        curr = next2

    return prev2



def addition(list1, list2):

    head = Node()
    current = head

    p = list1
    q = list2
    #transportul
    carry = 0
# list1 = 0044444
# list2 = 9999999
# 34444001
# 10044443

    while p or q:
        if p:
           x = p.data
        else:
           x = 0

        if q:
           y = q.data
        else:
           y = 0
        summa = x + y + carry

        carry = summa // 10

        current.next = Node()

        current.next.data = summa % 10

        if p:
           p = p.next
        if q:
           q = q.next

        current = current.next

    if carry > 0:
          current.next = Node()
          current.next.data = carry

    return head.next

#
# 1 -> 2 -> 3 -> 4 -> 5
# 1 <-- 2 <-- 3  <-- 4 <-- 5
# reverse = 5 4 3 2 1
# 34444001 => 10044443

def main():

    #in c++ int arr[10] = {1,2,3,4,4,5,6,7,8,9,10}
    #in python => arr = [1,2,3,4,4,5,5,5,54]
    #in c++ list1 = CreateList(head)
    # createlist(list1)
    # createlist(list2)
    # addition(list1, list2, sum)
    lista1 = CreateList()
    print(lista1)
    display(lista1)
    lista2 = CreateList()
    print(lista2)
    display(lista2)
    print("Suma = ")
    sum = addition(lista1, lista2)
    display( reverse( sum ) )
main()
