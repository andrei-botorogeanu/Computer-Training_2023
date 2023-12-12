#include<iostream>
using namespace std;

class Fractie{
public:
	int nr, num;
public:
	Fractie(int a, int b)
	{
		nr=a; num=b;
	}
	Fractie(){
		nr=0; num=0;
	}
	int numarator()
	{
		return nr;
	}
	int numitor()
	{
		return num;
	}
	void display()
	{
		cout<<nr<< "/"<<num;
	}
/*friend = keywords
Face legătura între funcția din afara clasei și datele membre, metodele membre din class   

- "ostream" este fluxul de iesire; "o" vine de la output
- ostream este tipul obiectului returnat de functie si anume "stream"
- "ostream&" ca sa se tina minte rezultatul obiectului
- "operator" ca sa se supraincarca datele
*/  
//		   ______________________________________________->este prototipul
	friend ostream& operator << ( ostream& , Fractie&  );
//									|						|
//								obiectul de tip ostream, obiectul de tip clasa fractie
//	STREAM ESTE OPERANDUL din dreapta si si f din stanga 
// La cele 2 argumente semnul "&" este obligatoriu, fara el nu se poate
};

ostream& operator << ( ostream &stream, Fractie& f )//	|
{	
	stream << "Fractie este: ";											//	|Functia 
	stream << f.numarator() << "/" << f.numitor(); 	//	|explicita din afara clasei
	return stream;									//	|
/* STREAM este de tip ostream, returneaza fluxul, se tine minte cuvintele si cele 
		2 metode membre(nr+num) si le afiseaza
 ostream <=> cout
 */
}
int main()
{
	Fractie f(4,5);
	f.display(); // Asa e cum fac de obicei
	cout<<endl;
	cout<<f;	// Asa doar cu "friend" si supraincarcarea operatorilor
}
/*
Dacă nu folosim friend atunci se va afișa:
OOP_friend.cpp:32:19: error: 'std::ostream& Fractie::operator<<(std::ostream&, Fractie&)' must have exactly one argument
   32 |          ostream& operator << ( ostream &stream, Fractie& f );
*/