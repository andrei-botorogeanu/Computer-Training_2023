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
		head->data;
		head->next = head;
	}
}
void display(struct Node* p)
{
	while(p!=nullptr){
		cout<< p->data;
		p = p->next;
	}
}
int main()
{
	int arr[]= {1,2,3,4,5,6,7,8};
	int	n = sizeof(arr) / sizeof(arr[0]);
	for(int i=0; i<size; i++)
		Create_list( arr[i] );
	display(head);
}