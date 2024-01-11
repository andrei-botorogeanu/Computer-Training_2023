/*
arr = {5,7,8,9,3}
  index0,1,2,3,4
arr[0]
arr[1]

struct Point {
    int data;
    float media;
    double PI;
    struct Point *urmatorul_element;
}

Point1(informatii, referinta catre urmatorul NODE)
----------->>>>> Point2(informatii, referinta catre urmatorul NODE)
     ----------->>>>> Point3(informatii, referinta catre urmatorul NODE)



Lista simplu inlantuita
-----------------------

struct Node {
     int data;
     struct Node *next;//retine adresa urmatorului element
}

8 7 2 3 4 => 72348 => 23487 => 34872 => 48723 => 87234

struct Node *head = NULL

head = new Node
head->data = 1

head->next = NULL

operatorul new = pentru alocare dinamica

node1 ->>>>> node2->>>> node3--->>>> node4 --->>>node5--->NULL
data          data       data         data        data
address       address    address      address     address

//declar un intreg
int a;
//declar un pointer catre intreg
int *p;

p= &a;

int *p = new int[ 100 ]

p retine adresa de inceput in zona HEAP

*/

#include <iostream>

using namespace std;

struct Node {

     int data;//camp de informatii, data

     struct Node *next; //camp care retine adresa urmatorului element; pointer catre urmatorul

} *head = NULL,
  *aux, *a, *b, *c;


/*
sir = 1,5,7,8,9
sir = 9,8,7,5,1

adaugi in lista 1 , devine capul listei
adaugi in lista 5, devine capul listei
adaugi in lista 7, devine capul listei

nr = 15789

nr MOD 10
nr = nr / 10

*/
void CreateList(int nr, struct Node *&p) {

      //p este head
      p = NULL;

      struct Node *new_node;//pointer catre struct Node

      while( nr ) {

        new_node = new Node;//aloca spatiu in zona HEAP pentru o structura Node
        //adresa de inceput este retinuta in q
        //adaugam in lista fiecare digit
        //completam informatia
        new_node->data = nr % 10;
        new_node->next = p;

        p = new_node;

        nr = nr/10;
      }
}

void permut(struct Node *&p) {

     if(p == nullptr || p->next == nullptr) return;

     struct Node *q = p;

     while( q->next!= nullptr ) q = q->next;

     q->next = p;

     p = p->next;

     q->next->next = nullptr;
}

void DisplayList(struct Node *head) {

     while( head!=NULL ) {

        cout<<head->data<<"";

        head = head->next;
     }

     cout<<"\n";
}

int main(int argc, char const *argv[]) {

  int nr;
  //nr = 98123
  //adaugam in list simplu inlantuita fiecare cifra a numarului
  //9,8,1,2,3

  /*
  Lista simplu inlantuita

        (simplu) struct Node {
                   int data;
                   struct Node* link;
                }

        (dublu) struct Node {
                   int data;
                   struct Node* next;
                   struct Node* previous;
                }
        (circulara)

  1.creezi un node nou
  2.completezi zona de informatii/DATA
  3.completezi zona de referinta

  friend1, friend2, friend3, friend4 --->NULL
tren
  vagon1 ---> vagon2 --->vagon3 -->locomotiva ->>NULL


  Node1 = (nume1,referinta1, cunoaste adresa urmatorului prieten)

  Node2 = (nume2,referinta2, cunoaste adresa urmatorului prieten)

  Node3 = (nume3,referinta3, cunoaste adresa urmatorului prieten)

  Node4 = (nume4,referinta4, cunoaste adresa NULL)

  */

  cout<<"Nr = ";
  //citim de la tastatura un numar format din mai multe cifre
  cin>>nr;

  //int *p;declaram un pointer catre variabile de tip intreg
  //float *p1 declaram un pointer catre variabile de tip float
  //double *p2 catre double
  //struct node *p3; //catre struct node

  //cream lista simple inlantuita
  CreateList( nr, head );

  DisplayList( head );

  aux =head;

  do {

     permut( head );
     DisplayList( head );

  }while( aux != head );

  return 0;
}
