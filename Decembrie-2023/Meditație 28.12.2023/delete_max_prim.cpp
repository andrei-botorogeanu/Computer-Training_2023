/*Consideram o lista simplu inlantuita in care sunt retinute
valori naturale distincte. Sa se realizeze un subprogram care sterge
elementul din lista ce contine cel mai mare numar prim. Subprogramul
va primi la apel, prin intermediul unui parametru, adresa de inceput
a listei.
Input:
3, 1, 2, 8, 14, 9, 7, 5
Output:
will remove 7
3, 1, 2, 8, 14, 9, 5*/
#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *next;
} *head=nullptr;
void CreateList(int value)
{
	if(head == nullptr) {
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
int isPrim(int n)
{
	if(n==1) return 0;
	if(n==2 || n==3) return 1;
	bool prim=1; 
	int i=2;
	while(i*i<=n && prim)
	{
		prim = (n%i != 0); i++;
	}
	return prim; 
}
void delete_prim(Node *&head)
{
	struct Node *tmp = NULL, *q = head;
	int max;
	if( isPrim(head->data) ) max=head->data;
	else max=0;
	while( q->next!=nullptr )
	{
		if(isPrim(q->next->data) && q->next->data>max) {
			max = q->next->data;
			tmp=q;	}	
		q = q->next;
	}
	if(max!=0){
		if(tmp==NULL) {
			tmp = head;
			head = head->next;
			delete tmp;
		} else {
			struct Node *aux = tmp->next;
			tmp->next = tmp->next->next;
			delete aux;
		}
	}
}
void display(Node *p)
{
	while(p!=nullptr) {
		cout<<p->data<< " ";
		p = p->next;
	}
}
int main()
{
	int arr[] = {2,4,6,7,8,23,3,9,45}, n= sizeof(arr) / sizeof(arr[0]);
	for(int i=0; i<n; i++)
		CreateList(arr[i]);
	delete_prim(head);
	display(head);
}