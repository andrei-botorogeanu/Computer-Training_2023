#include<iostream>
using namespace std;

typedef struct {
	float weight, value;
	int id;
	// g=greutate, v=valoarea obiectului
}T_Obiect;
void read_data( T_Obiect *ob, int *count, float *capacity )
{
	float w, v=1;
	cin >> *capacity;
	while(v!=0)
	{
		cin >> w >> v;
		ob[ (*count) ].weight = w;
		ob[ (*count) ].value = v;
		ob[ (*count) ].id = (*count);
		(*count)+=1;
	}
}
// const = constant, nu se modifica
// declaram un pointer catre orice care poate fi convertit la orice tip de data, dar nu se mai schimba 
int compare( const void*a, const void*b )
// a si b erau adrese de tip void, nu stim tipul lor
{ // Functia este un predicat binar folosit la sortare ca sa compare 2 elemente din vector
	T_Obiect *ob1 = (T_Obiect*)a;
	// aici se converteste la tipul de baza/ data T_Obiect cei doi pointeri a si b 
	T_Obiect *ob2 = (T_Obiect*)b;
	return ob2 -> value/ob2 -> weight - ob1 ->value/ob1->weight > 0 ;
	// aici se studiaza raportul
// folosim compare fiindca avem 2 rapoarte de comparat
// folosim sageata ca sa accesam proprietatile obiectului care sunt de tip struct,
//
}
int main()
{
	float capacity;
	int size=0;
//qsort sorteaza descrescator obiectele din struct in functie de compare
	T_Obiect arr[100];
	read_data(arr, &size, &capacity);
	qsort( (void*)arr, size-1, sizeof(T_Obiect), compare );//SIZE-1 este nr de componente ale vectorului
//cout << sizeof(T_Obiect); 
//cout << capacity<< " " << size-1;
	int i=0;
	while( capacity>0 )
	{
		if( arr[i].weight <= capacity )
		{
			capacity=capacity-arr[i].weight;
			i++;
		}
		else capacity = -capacity;
	}
	cout<< "In rucsac vom introduce urmatoarele obiecte: "<<endl;
	for(int j=0; j<i; j++)
	{
	cout<<"OBIECT: "<< " " << arr[j].id+1 <<" "<< arr[j].weight << " " << arr[j].value;
	cout<<" COMPLETE"<<endl;
	}
	if(capacity<0)
	{
	cout<<"OBIECT: "<<" "<<arr[i].id+1<<" "<<arr[i].weight<< " " << arr[i].value;
 	cout<< " "<< -capacity << " ALTERED";
 	}
 	return 0;
}
// 1 byte(octet in romana) = 8 biti
// 1 kilo =1024 bytes
// 1 mega = 1024 kilo

//char  : 1 byte
//short : 2 bytes
//int   : 4 bytes
//long  : 4 bytes
//float : 4 bytes
//double: 8 bytes 
