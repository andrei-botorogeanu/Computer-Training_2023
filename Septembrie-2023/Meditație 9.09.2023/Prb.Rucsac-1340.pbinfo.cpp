#include<iostream>
#include<algorithm>
using namespace std;
int n, Gmax;
// Am declarat un pointer catre functie numit comparer
//      Este bool pt ca functia noastra intoarce true sau false
typedef bool (*comparer)(const void *a, const void *b);
//			 Este void pt ca este un pointer catre orice si poate fi convertit la nevoile noastre
typedef struct {
	int weight, value;
}Obiect;
bool descending(const void *a, const void *b)
{
// ob1 si ob2 sunt pointeri de tip Obiect
	Obiect *ob1 = (Obiect*)a;
	Obiect *ob2 = (Obiect*)b;
	return ob1->value*ob2->weight < ob2->value*ob1->weight;
// Se foloseste "->" ca sa accesam campurile
}// comp este un pointer catre functia descending
void bubblesort(Obiect *ob, int n, comparer comp) 
//In ob se retine adresa lui arr; comparer este un tip de data, dar pointer catre functie 
{
	bool finished = false;
	while( !finished ){
		bool swapped = false;
		for(int i=1; i<n; i++)
			if( comp(&ob[i], &ob[i+1]) ){
				Obiect temp = ob[i];
				ob[i]=ob[i+1];
				ob[i+1]=temp;
				swapped = true;
			}
	
			if( swapped )
			{
				n--;
			} else {
				finished = true;
			}
	}
}
int main()
{
	Obiect arr[1005];
	cin>>n>>Gmax;
	for(int i=1; i<=n; i++)
		cin>>arr[i].weight>>arr[i].value;
	bubblesort(arr, n, descending);
				
	int i=1;
	int G=0;
	double cost=0;
	while( i<=n )
	{
		if( G + arr[i].weight <= Gmax )
		{
			G = G + arr[i].weight;
			cost = cost + arr[i].value;
			i++;  
		} else if(Gmax - G > 0) {
				int x = Gmax - G;
				double factor = 1.0*x / arr[i].weight;
				cost = cost + factor * arr[i].value;
				G = Gmax; // Asta este o conditie ca sa iasa pt while
		}
		else break;
	}
	cout<<cost;
	return 0;
}