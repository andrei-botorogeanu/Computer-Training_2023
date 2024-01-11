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
void remove_element(int node_search)
{
	if(head->data == node_search){
		struct Node *aux = head;
		head = head->next;
		delete aux;
	}
	else {
	struct Node *ptr, *del;
	ptr = head; 
	while( ptr->next!=nullptr && ptr->next->data != node_search )
		ptr= ptr->next;
	if(ptr->next==nullptr){
		cout<<"The element not fount";
		return;
	}

	del = ptr->next;
	ptr->next = del->next;
	delete del;
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
	remove_element(83);
	display(head);
}