#include <bits/stdc++.h>
using namespace std;

struct Node {
      int data;
      struct Node *next;

} *head = nullptr;
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
void remove_negative(struct Node *&head){
      struct Node *tmp, *q, *last;
      q = new Node;
      q->next = head;
      last = q;
      while(head!=nullptr){
            if( head->data<0 ){
                  tmp = head; 
                  last->next = head->next;
                  head = head->next;
                  delete tmp;
            } else {
                  last = last->next;
                  head = head->next;
            }
      }      
      head = q->next;
      delete q;
}
void display(struct Node *p)
{
      while(p!=nullptr){
            cout<<p->data<< " ";
            p = p->next;
      }
}
int main()
{
      int arr[]={1,-2,-3,4,-5, 6, -1, -5, 8},
            n = sizeof(arr) / sizeof( arr[0] );
      for(int i=0; i<n; i++)
            CreateList( arr[i] );
      remove_negative(head);
      display(head);
}