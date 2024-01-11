/*
Consideram o lista simplu inlantuita in care sunt retinute
valori intregi distincte. Realizati un subprogram care, primeste la apel,
prin intermediul unui parametru head, adresa de inceput a unei astfel de liste
si efectueaza stergerea nodurilor de informatie negativa.
Subprogramul va intoarce noua adresa de inceput a listei tot prin parametrul head.

input: -1 -2 -3 4 5 6 -12
output: 4 5 6
*/
#include <iostream>

using namespace std;

struct Node {
       int data;
       struct Node *next;
};

void CreateList(struct Node *&head) {
     struct Node *nod_nou;
     int nr, node_value;
     cout<<"Number of elements = ";
     cin>>nr;

     while(nr--) {
         cout<<"node = ";
         cin>>node_value;
         nod_nou = new Node;
         nod_nou->data = node_value;
         nod_nou->next = head;
         head = nod_nou;
     }
}

void DisplayList(struct Node *head) {

  while( head ) {

    cout<<head->data<<" ";
    head = head->next;
  }

  cout<<endl;
}
//-1 -3 -4 1 2 3
void RemoveNegativeElements(struct Node *&head) {
     struct Node *q,
                 *last,
                 *tmp;

     /*
     //lista
     q = new node
     q are o locatie in Heap
      q (info, NEXT ---> HEAD (adresa listei cu elemente pozitive si negative) )
      last = q
      pointerul last retine adresa nodului q
     */

     q = new Node;  //q este un pointer catre struct Node si primeste adresa 1000
     //q se creeaza cu alocare dinamica si adresa de inceput este stocata in q
     //campul next al nodului q are adresa head
     q->next = head;
     //adresa next al lui q este head
     // q(data, next = HEAD)
     last = q;//20000 locatia
     //adresa lui q va fi atribuita pointerului last
     //last este pointer catre struct Node si facem atribuirea last = q inseamna last primeste adresa lui q
     //  Lista: 1 7 91 9
     // q = nod la o anumita locatie
    //  head
    //  last
    // 2  -4     7   8
    //         last, head
    // head = q->next 2 7 8
     while( head != NULL ) {

            if( head->data < 0 ) {
                //stochez adresa nodului cu informatie negativa.
                tmp =  head;
                //retin in campul next al pointer-ului last
                last->next = head->next;
                head = head->next;
                delete tmp;

            } else {
               last = last->next;
               head = head->next;
            }
     }

     head = q->next;

     //dezalocam adresa nodului q
     delete q;
}

int main(int argc, char const *argv[]) {

  struct Node *head = NULL;

  CreateList( head );

  DisplayList( head );

  RemoveNegativeElements( head );

  DisplayList( head );

  return 0;
}
