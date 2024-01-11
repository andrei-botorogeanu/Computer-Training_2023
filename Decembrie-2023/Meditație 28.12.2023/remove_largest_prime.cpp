#include <iostream>

using namespace std;

struct Node {

   int data;
    struct Node *next;

} *head = NULL;

int isPrime(int nr) {

    if(nr == 1) return 0;
    if(nr == 2 || nr == 3 || nr == 5) return 1;

    int i = 2,
        prime = 1;

    while( i * i <= nr && prime == 1) {

      prime = ( nr % i != 0 );
      //nr mod i = restul impartirii numarului nr la i
      //nr = 10
      //nr % 2 = 0 si 0 != 0 => False
      i++;
    }

    return prime;
    //return or 1 or 0
}

void remove_largest_prime( struct Node *&head ) {

     struct Node *q = head,
                 *tmp = nullptr;
     int max;

     ///daca primul element din lista
     //este prime, atunci marcam faptul ca este si
     //cel mai mare numar prim din lista.
     if( isPrime( head->data ) ) max = head->data;

     else
                             max = 0;
//q = nodul care are informatia 1111
//q->data = 1111
//q->next = nodul care are informatia 34
//q->next->data = 34
//q->next->next = nodul care are informatia 123
//q->next->next->next nodul care are informatia 23
     while( q->next != nullptr ) {

           if(isPrime( q->next->data ) && q->next->data > max ) {

              max = q->next->data;

              //pointerul tmp retine  adresa nodulul din fata acelui nod cu informatia numar prim cea mai mare.
              tmp = q;
           }

           q = q->next;
     }
     //tmp = head
//lista = 7,1,23,9,10
//   head = head->next
//  update capul de lista
//head este nodul care are informatia 7 si este capul de lista
     if( max != 0) {
        if(tmp == NULL) {
          tmp = head;
          head = head->next;
          delete tmp;
        } else {
          Struct Node*aux = tmp->next;
          tmp->next = tmp->next->next;
          delete aux;
        }
     }
}

void DisplayList(struct Node *head) {

     for(Node*q = head; q != nullptr ; q = q->next )
     printf("%d ",q->data);
     printf("\n");
}

void CreateList(Node *&head) {

     Node *nod_nou;
     int n,
         node;

     printf("%s" ,"N = ");
     cin>>n;

     while(n--) {

       printf("%s", "Node=");
       cin>>node;
       nod_nou = new Node;
       nod_nou->data = node;
       nod_nou->next = head;
       head = nod_nou;

     }
}

int main(int argc, char const *argv[]) {
  //3, 1, 2, 8, 14, 9, 7, 5
  CreateList(head);
  DisplayList(head);
  remove_largest_prime(head);
  DisplayList(head);
  return 0;
}
