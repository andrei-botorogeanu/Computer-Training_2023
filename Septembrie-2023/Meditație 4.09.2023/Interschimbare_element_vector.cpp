#include<iostream>
using namespace std;

void swap( void *p1, void *p2, int dim){
	char *a = (char*) p1;
	char *b = (char*) p2;
	char aux;
	for(int i=0; i<dim; i++)
	{
		aux = *(a+i);
		*(a+i) = *(b+i);
		*(b+i) = aux; 
	} 

}
int main(){
	int v[] ={1,2,3,4,5};
	swap( &v[0], &v[4], sizeof(int) );
	
	for(int i=0; i<sizeof(v)/sizeof( v[0] ); i++)
		cout<< v[i]<< " "; 

}