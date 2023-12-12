#include <iostream>
/*
OOP imbina 3 concepte fundamentale:

- incapsulare
- mostenire
- polimorfism


Mostenire
----------

Definitie:

Proprietatea claselor prin care o clasa nou construita preia DATELE si METODELE
unei alte clase definite DEJA, se numeste mostenire.

Avand in vedere proprietatea de mostenire , tragem concluzia ca:

- daca avem la dispozitie o clasa, de exemplu M(clasa de baza) putem construi alta clasa
de exemplu D(clasa derivata) care, pe langa datele si metedele proprii, poate prelua datele si 
metodele clasei M:

---------------------------
class D: public M
---------------------------

clasa D = clasa derivata
clasa M = clasa de baza

*/

class FractieBAZA {

	  public:

	  	int nr,
	  	    num;

	  	int numarator() {
	  		return nr;
	  	}    

	  	int numitor() {
	  		return num;
	  	}
};

class FractieDerivata: public FractieBAZA {
      
      //am mostenit datele membre si metodele din clasa FractieBAZA
	  //[datale si metodele din clasa FractieBAZA]

	  public:	  	

	  	void citeste() {

	  		std::cin>>nr>>num;
	  	}

	  	void afiseaza() {

	  		std::cout<<numarator()<<"/"<<numitor();
	  	}
};


int main(int argc, char const *argv[])
{
    FractieDerivata F;
    F.citeste();
    F.afiseaza();

	return 0;
}