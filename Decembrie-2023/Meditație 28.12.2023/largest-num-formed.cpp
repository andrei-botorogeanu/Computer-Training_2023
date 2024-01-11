/*Consideram o lista simplu inlantuita care retine cifrele unui numar natural.
Sa se realizeze o functie care primeste la apel, printr-un parametru, adresa de 
inceput a unei astfel de liste si returneaza cel mai mare numar care se poate forma 
cu cifrele distincte.
Input: 3, 1, 2, 8
Output: 8321 */
#include <bits/stdc++.h>

using namespace std;

struct Node {

      int data;
      struct Node *next;

};

void DisplayList(struct Node *head) {

     for(Node*q = head; q != nullptr ; q = q->next )
     printf("%d ",q->data);

    // while(head!=nullptr) {
      // cout<<head->data<<" ";
       //head = head->next;
     //}

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

//4 7 8 9
void solve(Node *head) {

     char aux[ 10 ];
     long long num = 0;
     //for(int i = 0; i < 10; i++) aux[i]= 0;
     cout<<"Sizeof = "<<sizeof(aux)<<" ";
     memset(aux, 0, sizeof(aux));

     //initializam cu 0 toate componentele
     //[0,0,0,0,0,0,0,0,0,0,0]
     for(Node*q = head; q != nullptr; q = q->next)

         aux[ q->data ] = 1;

//un numar poate fi reprezentat cu cifre de la 0 .. 9
//3,9,1,7 => cel mai mare numar care se
//poate forma este 9731
      for(int i = 9; i >= 0; i--) {

          if( aux[ i ] ) {

            num = num * 10 + i;

          }
      }

      printf("Cel mai mare numar care se poate forma este:\n%lld", num);
}

int main(int argc, char const *argv[]) {
  struct Node *head = NULL;
  CreateList(head);
  DisplayList(head);
  solve(head);
  return 0;
}

/*
Daca avem input-ul urmator:
lista noastra este 3 5 2 1 9

char aux[10] = [0,1,1,1,0,1,0,0,0,0,1]
                          <<<<<---
                          for de la 9 pana la 0:
num = 0
for (size_t i = 0; i < count; i++) {
  /* code
for i de la 9 pana la 0:
    if aux[i] == 1:
       num = num * 10 + i

num = 9

num = 9 * 10 + 5
num = 95

num = 95*10 + 3
num = 953

num = 95321
*/
