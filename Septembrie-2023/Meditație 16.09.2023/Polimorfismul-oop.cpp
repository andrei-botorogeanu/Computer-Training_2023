/*
Polimorfismul
-------------

Polimorfismul se realizeaza prin redefinirea functiilor 
si a operatorilor prin intermediul functiilor virtuale.


class FractieBaza {
	
	int nr, 
	    num;

    //trei metode membre

	void scrie() {

	    numarator();
	    cout<<endl;
	    numitor();
	}

	void numarator() {
	   cout<<nr;
	}

	void numitor() {
	   cout<<num;
	}
}

class FractieDerivata: public FractieBaza {
	
	public:

		void numarator() {
	         cout<<"Numarator = "<<nr; 
		}

		void numitor() {
	         cout<<"Numitor = "<<num;
		}
}

int main() {
	
  FractieDerivata ob;

  cin>>ob.nr>>ob.num;

  ob.scrie();	
}

*/

#include <iostream>

using namespace std;

class FractieBaza {
	
	public:
	int nr, 
	    num;


    //nu am mai generat un constructor explicit

    //trei metode membre

	void scrie() {
		
	    numarator();
	    cout<<endl;
	    numitor();
	}


	virtual void numarator() {
	   cout<<"Metoda Numarator din clasa de baza = "<<nr;
	}

	

	virtual void numitor() {
	   cout<<"Metoda Numitor din clasa de baza = "<<num;
	}

};

class FractieDerivata: public FractieBaza {

	public:

		void numarator() {

	         cout<<"Metoda Numarator Redefinita din clasa Derivata ===> Numarator = "<<nr; 
		}

		void numitor() {

	         cout<<"Metoda Numitor Redefinita in clasa derivata ===>  Numitor = "<<num;
		}
};


int main(int argc, char const *argv[])
{

  //am declarat un obiect de tip FractieDerivata	
  FractieDerivata ob;

  //am initializat datele membre
  cin>>ob.nr>>ob.num;


 //am apelat metoda scrie
  ob.scrie();	

  return 0;
}