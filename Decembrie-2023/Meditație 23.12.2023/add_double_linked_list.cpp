#include <iostream>

struct Node {

     int data;
     struct Node* next;
};

void CreateList(struct Node*&head) {
     int nr, node_value;
     struct Node* q;
     std::cout<<"nr=";
     std::cin>>nr;
     while(nr--) {
       std::cout<<"node value = ";
       std::cin>>node_value;
       q = new Node;
       q->data = node_value;
       q->next = head;
       head = q;
     }
}

void AddDoubleOddNode(struct Node *&head) {

     struct Node *c;

     c = head;


     if( c->data & 1 ) {

         struct Node *new_node;

         new_node = new Node;
         new_node->data = 2 * c->data;
         new_node->next = head;
         head = new_node;
     }

     //ne deplasam pe urmatorul node diferit de NULL
     while(c->next != nullptr) {

          if(c->next->data & 1) {

              struct Node *q;

              q = new Node;//se creeaza un nod nou
              //completam zona de data
              q->data = 2 * c->next->data;
              //completam zona de next, de ref
              q->next = c->next;

              c->next = q;

              c = q->next;

          } else

            c = c->next;
     }

}

void display(struct Node*head) {
  while(head) {
    std::cout<<head->data<<" ";
    head = head->next;
  }
  std::cout<<"\n";
}

int main(int argc, char const *argv[]) {

  struct Node *head = NULL;

  CreateList(head);

  display(head);

  AddDoubleOddNode(head);

  display(head);

  return 0;
}
