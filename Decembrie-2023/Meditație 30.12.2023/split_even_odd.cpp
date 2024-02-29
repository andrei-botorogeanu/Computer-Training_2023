#include <iostream>
using namespace std;

struct Node {
   int data;
   struct Node *next;
} *head =nullptr;

void CreateList(int value)
{
   if(head==nullptr){
      head = new Node;
      head->data = value;
      head->next = nullptr;
   } else {
      struct Node *nod_nou = new Node;
      nod_nou->data = value;
      nod_nou->next = head;
      head = nod_nou;
   }
}
void split_list(struct Node *head, struct Node *&L1, struct Node *&L2)
{
   struct Node *evenHead = new Node;
   struct Node *oddHead = new Node;

   struct Node *even_last = evenHead;
   struct Node *odd_last = oddHead;
   
   while(head!=nullptr){
      if( head->data%2==1 ){
         odd_last->next = head;
         odd_last = head;
         head = head->next;
         odd_last->next = nullptr;
      } else {
         even_last->next = head;
         even_last = head;
         head = head->next;
         even_last->next = nullptr;
      }
   }
      L1 = evenHead->next;
      L2 = oddHead->next;
      delete evenHead;
      delete oddHead;
}
void display(struct Node *p)
{
   while(p!=nullptr)
   {
      cout<<p->data<<" ";
      p = p->next;
   }
   cout<<endl;
}
int main()
{
   struct Node *L1 = nullptr, *L2 = nullptr; 
   int arr[] = {1,2,23,4,3,54,45,9,47},
         n= sizeof(arr) / sizeof(arr[0]);
   for(int i=0; i<n; i++)
      CreateList(arr[i]);
   //display(head);
   split_list(head, L1, L2);
   //display(head);
   display(L1);
   display(L2);
}