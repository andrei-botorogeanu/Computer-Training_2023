#include <iostream>
#include <cstring>

using namespace std;

struct Person {
      char name[20],
           surname[20];
};

Person p,
       //variabila pointer catre Person
       *adr = &p;

int main(int argc, char const *argv[]) {

  //am declarat o variabila de tip intreg
  int a = 10;

  //am declarat o variabila de tip pointer catre int
  int *ptr = &a;

  //folosim operatorul & pentru a obtine adresa variabilei
  int *c = &a;

  cout<<"Valoarea memorata de variabila a: "<<a<<endl;

  //folosind * nume_pointer vom accesa valoarea de la adresa retinuta de pointer
  cout<<"pointerul ptr: "<<*ptr<<endl;

  cout<<"pointerul c: "<<*c<<endl;

  cout<<&a;
  cout<<endl;

  strcpy(p.name, "yyy");
  strcpy(p.surname,"zzzz");

  //punctul este un operator de selectie si are prioritate maxima
  cout<<(*adr).name<<" "<<(*adr).surname<<endl;
  //sa observam modul in care am obtinut continutul unui camp al variabilei p,
  //pornind de la pointerul "adr" catre p.
  //Operatorul '*' unar, numit si operator de deferentiere, are prioritate 2, mai mica
  //decat operatorul ".". Prin urmare, in absenta parantezelor rotunde, se incearca
  //mai intai evaluarea expresiei "adr.name", expresie care n-are sens. Parantezele schimba
  //ordinea de evaluare.
  //*adr.surname<<endl;->>se va produce o eroare.
  return 0;
}
