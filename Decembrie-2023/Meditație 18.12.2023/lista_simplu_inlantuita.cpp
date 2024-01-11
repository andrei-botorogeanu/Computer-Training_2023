#include<iostream>
using namespace std;

struct Node {
	int data;
	struct Node *next;
} *head = NULL, *aux ;
void CreateList(struct Node *&p, int nr)
{
	struct Node *new_node;
	while( nr!=0 ){
		struct Node *new_node = new Node;
		new_node->data = nr % 10;
		nr = nr / 10;
		new_node->next = p;
		p = new_node;
	}
}
void permut(struct Node *&p)
{
	while( p->next == NULL || p == NULL )	return;

	struct Node *q = p;
	while( q->next!=NULL )
		q = q->next;
	q->next = p;
	p = p->next;
	q->next->next = NULL;
}
void display(struct Node *head)
{
	while( head!=NULL ){
		printf("%d ", head->data);
		head = head->next;
	}
	cout<<endl;
}
int main()
{
	int n;	cin>>n;
	CreateList(head, n);
	aux = head;
	do{
		permut(head);
		display(head);

	}while(aux!=head);
}