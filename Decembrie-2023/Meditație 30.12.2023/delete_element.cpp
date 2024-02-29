#include<bits/stdc++.h>
using namespace std;
struct  Node {
	int data;
	struct Node *prev,
				*next;
}*front = nullptr, *back = nullptr;

void CreateList(int value)
{
	if(front == nullptr){
		struct Node *c = new Node;
		c->data = value;
		c->prev = nullptr;
		c->next = nullptr;
		front = back = c ;
	} else {
		struct Node *c = new Node;
		c->data = value;
		c->prev = back;
		c->next = nullptr;	
		back->next = c;
		back = c;
	}
}
void remove(int whichNode)
{
	if(whichNode == front->data) {
		struct Node *tmp;
		tmp = front;
		front = front->next;
		front->prev = nullptr;
		delete tmp;
	} else if(back->data == whichNode) {
		struct Node *tmp;
		tmp = back;
		back = back->prev;
		back->next = nullptr;
		delete tmp;
	} else /*if( back->data!=whichNode && front->data!=whichNode )*/ {
		
		struct Node *c = front;
		while( c->data!=whichNode && c->next!=nullptr ) 
			c = c->next;
		if( c->next!=nullptr && c!=nullptr ) {
			c->next->prev = c->prev;
			c->prev->next = c->next; 
			delete c;
		}
		else cout<< "Not found \n";  
	}
}
// c->prev	  c 	c->next
// 34   	7678   	89
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
	int arr[] = {1,2,3,4,5}, 
		n = sizeof(arr) / sizeof(arr[0]);
	for(int i=0; i<n; i++)
		CreateList(arr[i]);
	remove(35);

	display_to_left();
	display_to_right();
}