#include<iostream>
using namespace std;

class Fractie{
private:
	int numarator, numitor;
public:
	Fractie(int numarator, int numitor)
	{
		this->numarator = numarator;
		this->numitor = numitor;
//Cu "this" se pot accesa si datele membre si metodele membre
	}
	void display()
	{
		cout<<numarator<<"/"<<numitor;
	}
	Fractie()
	{
		numarator =0;
		numitor =0;// aici nu conteaza ce facem
	} 
	Fractie operator+(Fractie& f)
	{
		Fractie Fsum;
		Fsum.numarator = numarator*f.numitor + f.numarator*numitor;
		Fsum.numitor = numitor * f.numitor;
		return Fsum;
	}
//						aici x nu conteaza, este pus doar pt sintaxa
	Fractie& operator++(int x){// scriere prefixata
		numarator++;
		numitor++;
		return *this; // Intoarce obiectul
		// Cu "*" este obiectul Fractie
		// Fara "*" este doar o referinta catre clasa 
	} 
	Fractie& operator++(){// scriere prefixata

		numarator++;
		numitor++;
		return *this;
	}
};
int main()
{
	Fractie F1(7, 8);
	Fractie F2(2, 5);
	Fractie Fsum = F1 + F2;
	// Pentru Instanta Fsum se cauta constructorul fara parametrii
	F1.display(); 
	cout<<endl;
	F2.display();
    cout<<endl;
	Fsum.display();
	cout<<endl; 
	F1++; //asa nu e corect, dar numai dc nu supraincarci
	F1.display();
	cout<<endl;
	++F1;
	F1.display();
}