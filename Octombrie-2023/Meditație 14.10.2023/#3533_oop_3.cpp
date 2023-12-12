#include<iostream>
#define size 100000
using namespace std;
class Stiva{
private:
	int summit;
//VAR 1
/*--------
typedef struct Values{
		int val;
		int max;
	}container;

	struct Values *s;
---------*/
// VAR2
struct Values{
	int val; 
	int maxim;
};
	struct Values *container;
public:
	Stiva() {
/* VAR 1
container = new struct Values[size]; 
s = new container[size];
   VAR2*/
		container = new struct Values[size];
	}

	~Stiva(){
/* VAR 1:
delete [] s;
 VAR 2:*/
delete [] container;
	}
	void Push(int x){
		if( summit==0 ) 
			container[summit] = {x, x};
		else container[summit] = {x, max(container[summit-1].maxim, x) };
			summit++;
	}
/*
	La final summit este index+1
	   4
	   3  container[3] = 15, max(15, 18)= 18
       2  container[2] = 18, max(18, 8 )=18 
	   1  container[1] = 8,  max(8, 7  )=8
index: 0  container[0] = 7,  7
*/
	void Pop(){
		if(!Empty())	summit--;
	}
	int Top(){
		if(!Empty())	
			return container[summit-1].val;
		else return -1;
	}
	int Max(){
	if(!Empty())	
			return container[summit-1].maxim;
		else return -1;		
	}
	int Empty()
	{
		return summit==0;
	}
	int max(int a, int b){
		if(a>b)	return a;
		else return b;
	}
};
int main()
{
	Stiva w;
    w.Push(4);
    w.Push(2);
    w.Push(5);
    w.Push(1);
    cout << w.Top() << " " << w.Max() << "\n"; // afiseaza 1 5
    w.Pop();
    w.Pop();
    cout << w.Top() << " " << w.Max() << "\n"; // afiseaza 2 4
    return 0;
}