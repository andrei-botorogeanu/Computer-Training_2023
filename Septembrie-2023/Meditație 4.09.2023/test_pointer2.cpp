#include <iostream>

int increment2(int adr) {

   int x = adr;
   
   return  x + 1;

}	

void increment(int *adr) {

//acum adr retine adresa variabilei x
	//folosim * ca sa accesam continutul de la adresa respectiva
	(*adr) = (*adr) + 1;
	//echivalent cu a scrie x++
	//x++

	//fara return

}

int main(int argc, char const *argv[])
{

    //am declarat doua variabile de tip intreg
    //are un tip, adresa si valoare
	int x,
	    y;

    x = 9;
    //x++;//x = 9 + 1

    increment(&x);

    x = increment2(x);


	std::cout<<"Adresa variabilei = "<<&x<<std::endl;  
	
	std::cout<<x;
	return 0;
}