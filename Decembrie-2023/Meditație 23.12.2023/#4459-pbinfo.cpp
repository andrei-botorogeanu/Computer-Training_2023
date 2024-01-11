#include<iostream>
using namespace std;

struct Nod{
	int info;
	struct Nod *leg;
} *head=nullptr;
void Create_list(int value)
{
	if(head==nullptr){
		head = new Nod;
		head->info = value;
		head->leg = nullptr;
	} else {
		struct Nod *nod_nou;
		nod_nou = new Nod;
		nod_nou->info = value;
		nod_nou->leg = head;
		head = nod_nou;  
	}
}
void LsiAdd(Nod *&head, int val, int x, int y)
{	
	if( head->info == val ){
		struct Nod * nod_nou;
		nod_nou = new Nod;
		nod_nou->info = x;
		nod_nou->leg = head;
		head = nod_nou;

	} else {
		struct Nod*c = head;

		while(c->leg->info != val) c = c->leg;

		struct Nod * nod_nou;
		nod_nou = new Nod;
		nod_nou->info = x;
		nod_nou->leg = c->leg;
		c->leg = nod_nou;
	}
	struct Nod *c = head;
	while(c->info != val) c = c->leg;
	struct Nod *nod_nou;
	nod_nou = new Nod;
	nod_nou->info = y;
	nod_nou->leg = c->leg;
	c->leg = nod_nou; 

	if(c->leg==nullptr || c==nullptr){

		struct Nod*p = head;
		while(p!=nullptr){
		cout<< p->info<< " ";
		p = p->leg;
		}
		return;
	}
}
void display(struct Nod* p)
{
		while(p!=nullptr){
		cout<< p->info<< " ";
		p = p->leg;
		}
}
int main()
{
	int arr[]= {1,5,8,9};
	int	n = sizeof(arr) / sizeof(arr[0]);
	for(int i=0; i<n; i++)
		Create_list( arr[i] );
	LsiAdd(head, 10, 88, 99);
	display(head);
}