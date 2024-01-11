#include <iostream>

struct Node {

     int data;
     struct Node *next;
};

void createList(struct Node*&head) {

  int nr, node;
  struct Node*q;

  std::cout<<"Nr = ";
  std::cin>>nr;
  while(nr--) {
    std::cout<<"node=";
    std::cin>>node;
    q = new Node;
    q->data = node;
    q->next = head;
    head = q;
  }
}

void displayList(struct Node*p) {
  while(p) {
    std::cout<<p->data<<" ";
    p = p->next;
  }

  std::cout<<"\n";
}

void add_after_before(struct Node*&head, int node, int x, int y) {

     struct Node *nod_nou;

     if(head->data == node) {
         nod_nou = new Node;
         nod_nou->data = x;
         nod_nou->next = head;
         head = nod_nou;

     struct Node *c = head, *new_node;

     while(c->data != node) c = c->next;

     new_node = new Node;
     new_node->data = y;
     new_node->next = c->next;
     c->next = new_node;

     } else {

         struct Node *c = head, *new_node,
                                *aux,
                                *new_node2;

         while(c->next != NULL && c->next->data != node) c = c->next;

         if(c!=nullptr && c->next!=nullptr) {

            aux = c->next;

            new_node = new Node;
            new_node->data = x;
            new_node->next = c->next;
            c->next = new_node;

            new_node2 = new Node;
            new_node2->data = y;
            new_node2->next = aux->next;
            aux->next = new_node2;

         }

     }
}

int main(int argc, char const *argv[]) {

   struct Node *head = nullptr;

   createList(head);

   displayList( head );

   int x = 7777,
       y = 8888,
       after_node;

   std::cout<<"after node = ";
   std::cin>>after_node;

   add_after_before(head, after_node, x, y );

   displayList( head );

  return 0;
}
