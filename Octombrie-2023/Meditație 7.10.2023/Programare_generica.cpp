//Programare generică
#include<iostream>
using namespace std;
template <class Type>
void schimb(Type *p, int n)
{
	for(int i=0; i<n-1; i++)
		for(int j= i+1; j<=n-1; j++)
			if( *(p+j) < *(p+i) )
			{
				Type aux = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = aux;
			}
}
int main()
{
	double v[]= { 1.2, 3.4, 0.3, 10.4, 2.5, 7.8 };
	int n = sizeof(v)/sizeof(v[0]);
	schimb(v, n);
	for(int i=0; i<n; i++)
		cout<<v[i]<< " ";
}