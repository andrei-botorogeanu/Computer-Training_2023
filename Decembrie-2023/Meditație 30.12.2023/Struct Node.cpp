struct Node{
	int camp1;
	int camp2;
	...
	int campn;
	struct Node *next;
}
struct Node *evenHead = new Node;
struct Node *evenHead2 = new Node;

Evenhead este un pointer catre struct Node, iar cu new Node se aloca spatiu in zona HEAP 
pt o structura struct Node si adresa de inceput a structurii este pasata pointer-ului 
evenHead care este declarat in segmentul de data.


{ camp1, camp2, *next } ->> locatie(evenHead)

evenHead->camp1
evenHead->camp2
					
					struct:
evenHead->>>0x34gergh356567
struct Node *lastHead = evenHead;

{info1, next1} {info2, next2}...{infon, nextn}

struct Node{
	int info1;
	int info2;
	int infon;
}
struct Node *list1 = new Node;
struct Node *list1 = list1
list2 = list1
list1->info = 10
list1->info2 = 20
......
list1->info = 1000 
 