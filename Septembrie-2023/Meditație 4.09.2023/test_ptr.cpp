#include <iostream>

void search(int val, int *adr1, int *adr2) {

*adr1 = *adr1 + 1;

}

int *z2;

int z;

int main(int argc, char const *argv[])
{
	int a; 
	char str[100];
	//str1 + str2;
	//a + b
	int b;
	int c;

	a = 1;

	a++;

	search(a, &a, &b);//
	//    valoare, adresa a, adresa b
	
	std::cout<<a;

	std::cout<<"Variabila a este caracterizata de: tip, adresa si valoare"<<&a<<""<<a;

	return 0;
}

//Orice variabila in C++, C este un obiect caracterizat de: TIP, ADRESA SI VALOARE