#include <iostream>

using namespace std;

class Fractie {
        //modificator de acces [public][private][protected]	  
	   //date membre
	  //
      private: 
	  	int numarator;
	  	int numitor;

      public: 
	  	void citeste() {
	  		cout<<"Numarator = ";
	  		cin>>numarator;
	  		cout<<"Numitor = ";
	  		cin>>numitor;
	  	};

	  	void afiseaza() {

	  		cout<<numarator<<"/"<<numitor;
	  	};
};

//mostenire 
class A: public Fractie {

	//folosesti datele proctected din clasa A
};

class Permutari {

	  //date membre si metode
	  //date protected
	  protected:
	  	int a,b;
};

///    clasa derivata             clasa de baza   
class Combinari: public Permutari {
     //poti sa prelucrezi datele membre din clasa Permutari
	//poti sa lucrezi cu a si b

};

//class new_CLASS: public old_CLASS {
	
   //[code]
//}

class Fractie2 {

      public:
      	//am incapsulat 2 date membre
      int nr;
      int num;
      

      //am incapsulat si 5 metode membre
      void citeste() {

      	   cout<<"numarator=";
           cin>>nr;
           cout<<"numitor=";
           cin>>num;
      } 

      void afiseaza() {

           cout<<"Fractia este = "<<nr<<"/"<<num;
      } 

      int numarator() {

      	  return nr;
      }

      int numitor() {

          return num;
      }

      void add_nr(int a) {

             nr = nr + a;
      }

      void add_num(int a) {
             num = num + a;	
      }	
};

int main(int argc, char const *argv[])
{

    //am declarat un obiect de tip Fractie, numit f1
	//Fractie f1;

	//cin>>f1.numarator;
	//cin>>f1.numitor;
    
    //f1.citeste();

    //cout<<f1.numarator;
    //am apelat metoda membra citeste
	//f1.citeste();
	//cout<<f1.numarator<<"////";
	//cout<<f1.numitor;
	//f1.afiseaza();

	//cream un obiect de tip Fractie2

    //am creat o instanta a clasei Fractie2 
	Fractie2 obiect;


	obiect.citeste();

	obiect.add_nr(1);
	obiect.add_num(1);

	obiect.afiseaza();

	return 0;
}

/*
Programarea orientata pe obiecte imbina trei concepte fundamentale:

- Incapsulare
- Mostenire
- Polimorfism

Proprietatea obiectelor, de a ingloba intr-o singura structura sintactica atat date cat si metode care prelucreaza eventual aceste date,
se numeste INCAPSULARE

*/


