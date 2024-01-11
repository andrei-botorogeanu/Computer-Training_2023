#include<bits/stdc++.h>
using namespace std;
const long BIGNUM = 99999;

struct Node {
	int info;
	struct Node *next;
};
int main()
{
	struct Node *c, *c1, *p, *head; 
	int n;
	cin>>n;
	head = (struct Node*)malloc(sizeof(struct Node));
	head->info = BIGNUM;
	head->next = nullptr;

	for(int i=1; i<=n; i++) {
		p = (struct Node*)malloc(sizeof(struct Node));
		scanf("%d", &p->info);
		if(p->info < head->info){
			p->next = head;
			head = p;
		} else {
			c = head;
			c1 = head->next;
			while(p->info > c1->info){
				c = c->next;
				c1 = c1->next;
			}
			c->next = p;
			p->next = c1;
		}
	}
	c = head;
	while( c && c->info!=BIGNUM ){
		printf("%d ", c->info);
		c= c->next;
	}
}