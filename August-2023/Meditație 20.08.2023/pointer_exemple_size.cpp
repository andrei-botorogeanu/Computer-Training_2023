#include <iostream>

using namespace std;

typedef struct {

	    float greutate, value;	    
} Object;

//tipul pointerului trebuie sa corespunda cu tipul variabilei

void readData(int *count, int *pointer, Object *ob) {

     //(*count) = 0
	 cin>>w>>v;
     ob[ (*count) ].greutate = w;
     //vec[ (*count) ].greutate = w;
     ob[ (*count) ].value = v;
     //(*count)++
 
     //"count" este un pointer catre intregi. poate retine doar adrese de varibile de tip intreg

     cout<<"Adresa pointerului count = "<<count<<endl;

	 //adaugi 90
     *count = *count + 90;

     //afisezi continutul de la adresa 0x7ffc3030dfd4
     cout<<"Continutul pointerului count = "<<(*count)<<endl;


     cout<<*(pointer+0)<<" - "<<*(pointer+1)<<" - "<<*(pointer+2);
     //*(pointer+n) - continutul componentei n+1
}

//& acceseaza adresa variabilei.
//* steluta acceseaza continutul (din atributul valoare) variabilei.


int main(int argc, char const *argv[])
{
	int size = 11;

	Object vec[100];

	//declaram un vector de intregi
	int arr[ 10 ];

	arr[0] = 777;

	arr[1] = 778;

	arr[2] = 779;

	cout<<"SIZE = "<<size<<endl;
    
    cout<<"Adresa variabile SIZE = "<<&size<<endl;

	readData( &size, arr, vec);  
    
    //declari un pointer catre intregi
    int *p;

    //facem atribuirea
    p = arr;

    //arr = [0,1,2,3,4,4,5,6,7]
   //      /\  
  //       ||
  //

    //p = adresa componentei arr[0]

    cout<<endl<<p[ 1 ]<<" - "<< *(p + 1)<<endl;

	return 0;
}