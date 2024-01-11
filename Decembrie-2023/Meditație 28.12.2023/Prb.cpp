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
void solve(Node *head)
{
	int num=0; char aux[10];
	memset(aux, 0, sizeof(aux));
	for(struct Node *p=head; p!=nullptr; p=p->next )
		aux[ p->data ] = 1;
	for(int i=9; i>=0; i--)
		if(aux[i]==1)
			num = num*10 + i;
	cout<<num;
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
	int arr[] = {2,4,6,7,8,3,3,9,0}, n= sizeof(arr) / sizeof(arr[0]);
	for(int i=0; i<n; i++)
		CreateList(arr[i]);
	solve(head);
	//display(head);
}