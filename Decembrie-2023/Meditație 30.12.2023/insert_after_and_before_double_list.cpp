#include<bits/stdc++.h>
using namespace std;
struct  Node {
	int data;
	struct Node *prev,
				*next;
}*front = nullptr, *back = nullptr;

void CreateList(int value)
{
	if(front==nullptr){
		struct Node *c = new Node;
		c->data = value;
		c->prev = nullptr;
		c->next = nullptr;
		front = back = c ;
	} else {
		struct Node *c =new Node;
		c->data = value;
		c->prev = back;
		c->next = nullptr;	
		back->next = c;
		back = c;
	}
}
void insert_after_element(int which_node, int which_value)
{
	if(back->data == which_node){
		struct Node *nod_nou = new Node;
		nod_nou->data = which_value;
		nod_nou->next = nullptr;
		nod_nou->prev = back;
		back->next = nod_nou;
		back = nod_nou;
	} else {
		struct Node *c = front;
		while(c->data != which_node)
			c = c->next;
		struct Node *nod_nou = new Node;
		nod_nou->data = which_value;
		nod_nou->next = c->next;
		nod_nou->prev = c;
		c->next->prev = nod_nou;
		c->next = nod_nou;
	}
}
void insert_before_element(int which_node, int which_value)
{
	if(front->data == which_node){
		struct Node *nod_nou = new Node;
		nod_nou->data = which_value;
		nod_nou->next = front;
		nod_nou->prev = nullptr;
		front->prev = nod_nou;
		front = nod_nou;
	} else {
		struct Node *c = front;
		while(c->next->data != which_node)
			c = c->next;
		struct Node *nod_nou = new Node;
		nod_nou->data = which_value;
		nod_nou->next = c->next;
		nod_nou->prev = c;
		c->next->prev = nod_nou;
		c->next = nod_nou;
	}
}		 
void display_to_right()
{
	for(struct Node *c = front; c!=nullptr; c=c->next) {
		cout<<c->data<< " ";
	} cout<<endl;
}
void display_to_left()
{
	for(struct Node *c=back; c!=nullptr; c=c->prev) {
		cout<<c->data<< " ";
	} cout<<endl;
}
int main()
{
	int arr[]={1,2,3,4,5}, 
		n = sizeof(arr) / sizeof(arr[0]);
	for(int i=0; i<n; i++)
		CreateList(arr[i]);
	insert_before_element(5, 88888);

	display_to_left();
	display_to_right();
}