#include <iostream>

using namespace std;

//Pointers retin doar adrese catre un tip de baza

int main(int argc, char const *argv[])
{
	
	string b;

	//tipul de data structurat se creeaza cu ajutorul cuvantului cheie STRUCT

	//dupa acolade urmeaza proprietatile tipului general struct

	//declarare:
	//typedef struct NUME_TIP {

	     //tip_de_baza(int, float, double, string, char, .) nume_variabila;

    //} name;

    NUME_TIP var;

	typedef struct __masina__ {
 
           //proprietati
           int kilometraj;
           string culoare;
           int greutate;
           int numar_de_usi;
           int off_road; 
	
	} Masina;

	struct Object {
		float greutate,
		      valoare;
	}
    
	Masina toyota;

	toyota.off_road = "yes";
	///......


   //pentru a accesa o valoare de tipul struct: nume_variabila [punct] nume_proprietate
	
 


	//declaram o variabila de tip intreg
	int a;

    //atribuim variabile valoarea 10
	a = 10;

	int arr[100];

    //pointer catre intreg. inseamna ca variabila p poate sa retina in atributul valoare doar adrese catre variabile de tip intreg
	int *p;

	//pointer catre intreg. inseamna ca variabila p poate sa retina in atributul valoare doar adrese catre variabile de tip real
	float *p2;

	//pointer catre intreg. inseamna ca variabila p poate sa retina in atributul valoare doar adrese catre variabile de tip real cu dubla precizie
	double *p3;

	p = &a;

	cout<<p;
 
    //daca vrem sa aflam continutul de la adresa pointerului 0x7ffeb2a91f94, aplicam steluta

    cout<<endl;

    cout<<*p;

    int c = 800;
    //p = c;//error: invalid conversion from ‘int’ to ‘int*’ [-fpermissive] 
    //NU facem atribuirea asta
    //int versus int*

    int * variabila;//nu are importanta asezarea stelutei.

	//pointers: catre intregi, floats, doubles, strings

	return 0;
}