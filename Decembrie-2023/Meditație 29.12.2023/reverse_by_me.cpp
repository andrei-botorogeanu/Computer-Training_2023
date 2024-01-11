#include<iostream>
using namespace std;
struct Node {
	int data;
	struct Node *next;
} *head=nullptr;
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
void display(Node *p)
{
	while(p!=nullptr)
	{
		cout<< p->data<< " ";
		p = p->next;
	}
}
struct Node * reverse(struct Node *head)
{
	struct Node *current = head, *next2 = NULL, *prev2 = NULL;
	while(current != nullptr)
	{
		next2 = current->next;
		current->next = prev2;
		prev2 = current;
		current = next2;
	}
	return prev2;// head-ul lista inversata
}
int main()
{
	int arr[] = {1,45,56,4,65,6, 100},
		n = sizeof(arr) / sizeof(arr[0]);
	for(int i=0; i<n; i++)
		CreateList(arr[i]);
	head = reverse(head);
	display(head);
}