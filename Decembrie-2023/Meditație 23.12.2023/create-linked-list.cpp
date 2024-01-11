#include <iostream>
/*
struct Node {
       int data;
       struct Node*next;
       Node(int value):data(value), next(nullptr);
}

struct versus class

public, protected, private

class Node {
      public:
      int data;
      struct Node*next;
      Node(int val) {
         data = val;
         next = NULL;
      }
}
head = new Node( 2 );
head->next = ptr
*/

struct Node {

     int data;
     struct Node *next;

} *head = nullptr;

void adaugareLista( int value ) {

     if(head == nullptr) {
       //aloca spatiu in HEAP si adresa de inceput o
       //atribuie lui head
       head = new Node;
       head->data = value;
       head->next = nullptr;

     } else {

        //aici declam un pointer catre struct Node
       struct Node *nod_nou;
       nod_nou = new Node;
       //se creeaza un nod nou in zona HEAP
       //nod_nou este declarat in zona segmentului de date
       //nod_nou = new Node;
       //aici completam zonele de informatii alocate nodului, si anume: campul de date si campul de referinta
       nod_nou->data = value;
       nod_nou->next = head;
       head = nod_nou; //stabilesti head = noul nod

     }
}

void RemoveFromList(int search_node) {

     //avem de analizat 2 cazuri:
     //-primul caz in care nodul se afla chiar in capul listei, este primiul nod_de_sters
     //-al doilea caz, cand nodul de sters se afla in interiorul listei

     //cercetam daca se afla in capul listei
     if( search_node == head->data ) {

         struct Node *ptr;

         ptr = head;//head-ul tine minte adresa de inceput a listei

         head = head->next;

         delete ptr;//dezalocam spatiul din HEAP pentru primul nod

     } else {
       //while

       struct Node* ptr,
                  * del;

       ptr = head;

       while( ptr->next != NULL && ptr->next->data != search_node) ptr = ptr->next;

       if(ptr->next == nullptr) {
         printf("\n");
         std::cout<<"the Element "<<search_node<<" nu se gaseste in lista"<<" Nu am ce sa sterg";
         printf("\n");
         return;
       }

       del = ptr->next;

       ptr->next = del->next;

        // ptr   ptr->next  del->next
        //          del
       //node23 node64 node15
       //                /\
       //                ||
      //  --------------->>

       delete del;

       //ptr->next = value versus ptr = ptr->next
     }
}

void displayList(struct Node *p) {

     while( p != nullptr )
     {
        printf("%d ", p->data);

        p = p->next;
     }

     printf("\n");
}

int main(int argc, char const *argv[]) {

  //array-ul principal
  int i, arr[] = { 9, 18, 17, 16, 15, 64, 23, 2, 1, 0 },

  //head = nodul cu informatia 9
  //head->next = nodul cu informatia 18
  //head->next->next = nodul cu informatia 17

  //se creeaza un nod in zona HEAP si adresa este transmisa lui head
  //se completeaza zona de informatii/data 9, se completeaza zona de referinta

      n = sizeof( arr ) / sizeof( arr[0] );

  for(i = 0; i < n; ++i) {

      adaugareLista( arr[ i ] );
  }

  displayList( head );

  int nod_de_sters;

  std::cout<<"Dati un nod de sters = ";
  std::cin>>nod_de_sters;

  printf("Stergem pe %d\n", nod_de_sters);

  RemoveFromList( nod_de_sters );

  displayList( head );

  ///{ 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }

  //{ 9, 8, 6, 5, 4, 3, 2, 1, 0 }

  return 0;
}
