#include <iostream>

using namespace std;
struct Node {
    int data;
    struct Node *next;
};

void create(struct Node*&head) {
   int nr,data;
   struct Node *q;
   cin>>nr;
   while(nr--){
     cin>>data;
     q = new Node;
     q->data = data;
     q->next = head;
     head = q;
   }
}

void display(struct Node*head) {
     while(head) {
       cout<<head->data<<" ";
       head = head->next;
     }
     cout<<"\n";
}

// current    current->next
//      1 ---> 2 ----> 3 ----> 4 ----- > 5
//(NULL= next,1) <---- 2 <---- 3 <---- 4  <-----  5

struct Node* reverse(struct Node*head) {

     struct Node*curr,
                *next2,
                *prev2;
     curr = head;
     next2 = NULL;
     prev2 = NULL;

     while( curr != NULL ) {
       next2 = curr->next;
       curr->next = prev2;
       prev2 = curr;
       curr = next2;
     }
       return prev2;
}

int main(int argc, char const *argv[]) {
  struct Node *head = NULL;

  create(head);
  display(head);
  head = reverse( head );
  display(head);
  return 0;
}
