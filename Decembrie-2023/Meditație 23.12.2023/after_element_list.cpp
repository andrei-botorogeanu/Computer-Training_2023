#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
} *head=nullptr;
void Create_list(int value)
{
	if(head==nullptr){
		head = new Node;
		head->data = value;
		head->next = nullptr;
	} else {
		struct Node *nod_nou;
		nod_nou = new Node;
		nod_nou->data = value;
		nod_nou->next = head;
		head = nod_nou;  
	}
}
void after_element(int node, int value)
{
	struct Node *c = head;
	while(c->data != node) c = c->next;

	struct Node *nod_nou;
	nod_nou = new Node;
	nod_nou->data = value;
	nod_nou->next = c->next;
	c->next = nod_nou; 
}
void before_element(int node, int value)
{
	if( head->data == node ){
		struct Node * nod_nou;
		nod_nou = new Node;
		nod_nou->data = value;
		nod_nou->next = head;
		head = nod_nou;

	} else {
		struct Node*c = head;

		while(c->next->data != node) c = c->next;

		struct Node * nod_nou;
		nod_nou = new Node;
		nod_nou->data = value;
		nod_nou->next = c->next;
		c->next = nod_nou;
	}
}
void display(struct Node* p)
{
	while(p!=nullptr){
		cout<< p->data<< " ";
		p = p->next;
	}
}
int main()
{
	int arr[]= {1,2,3,4,5,6,7,8};
	int	n = sizeof(arr) / sizeof(arr[0]);
	for(int i=0; i<n; i++)
		Create_list( arr[i] );
	before_element(1, 1111);
	display(head);
}