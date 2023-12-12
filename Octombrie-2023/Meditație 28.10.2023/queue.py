#
# Structura de date Queue (Coada)
# FIFO First In - First Out
#
'''
Coada:
<-----4,3,2,1,0,-1,-2<------
      1,2,3,44,55
index:0,1,2,3,4,5
//La stiva: LIFO
4
3
2
1
<--,98,9,09<---

Stiva = Stack
Coada = Queue
Methods:

Euqueue - adaugi elemente in coada
Dequeue - scoti elemente din coada
'''

class Queue:
      #constructorul clasei
      def __init__( self, capacity ):
          #datele membre
          #array
          self.arr = []
          #capacitatea cozii
          self.capacity = capacity

      # metoda adauga elemente noi in Structura de tip coada COADA
      def enqueue(self, data):

          if self.isFull() is True:
              print("Coada este plina!")
              return None
          else:
              print("Am adaugat in Coada", data)
              self.arr.append(data)

      # metoda scoate din coada elemente
      def dequeue(self):
           if self.isEmpty() is True:
               print("Coada este goala. nu am ce sa scot")
               return None
           else:
               data = self.arr[0]
               print("SCOT din Coada:", data)
               self.arr.pop( 0 )
               return data

      def  isEmpty(self):
           return len( self.arr ) == 0

      def  size(self):

           return len( self.arr )

      def isFull(self):

          return self.capacity == len( self.arr )

      def display(self):

          if self.isEmpty() is True:
              print("# WARNING: Coada este goala , nimic de afisat")
              return None

          for elem in self.arr:
              print(elem, end = " ")
          print()




def main():
    coada = [1,2,3,4,5]
      #index 0
    #coada.append(-1)
    coada.append(-1)
    # va deveni [1,2,3,4,5,-1]
    # coada.pop( INDEX ); INDEX: 0, lungimea vectorului-1
    # n = coada.pop(2)
    # scoate din vectorul coada elementul care se afla pe pozitia 2
    #si returneaza elementul, apoi il returneaza variabilei n
    #
    '''
    coada.pop(2)
    #coada = [1,2,4,5,-1]
    coada.pop(2)
    #coada = [1,2,5,-1]
    coada.append(2023)
    coada.append(2024)
    coada.append(2025)
    print(coada)

    Coada functioneaza dupa principiu Primul intrat , primul iesit FIFO = First
    in , first out
    vec = [1,2,3,4,5]
    vec.pop(0)
    vec.pop(0)
    vec.pop(0)
    print(vec)
    '''


    q = Queue( 100 )

    q.enqueue(8)
    q.enqueue(9)
    q.enqueue(10)
    q.enqueue(11)
    q.display()
    print("SIZE COADA = ", q.size())
    q.dequeue()
    print("SIZE COADA = ", q.size())
    q.dequeue()
    print("SIZE COADA = ", q.size())
    q.display()
    q.dequeue()
    print("SIZE COADA = ", q.size())
    q.display()
    q.dequeue()
    q.dequeue()
    q.dequeue()
    q.dequeue()
    q.dequeue()
    q.display()
    '''
    vec = ["xyz", "abc", "123", "789", "ADA"]
    #      elem     elem  elem   elem    elem

    #pentru fiecare element din vectorul vec sa executi o instructiune
    for elem in vec:
        #prelucram elem
        print( elem )
    '''
main()
