#include <iostream>
using namespace std;
/*
Stiva Template - programare generica
Principiul de baza: LIFO = Last in First Out

5  virful stivei
4
3
2
1

adaugam : 
5
4
3
2
1


5
4
3
2
1

Metode membre:
push() ->metoda care adauga elemente in stiva
pop()  -> metoda care scoate elemente din stiva

Data MEmbre:
int virful_stive

TYPE(int,float,double,char) Stiva[100]
*/

const int SIZE = 10;

template <class TYPE>
class Stack {
 
      public:
      //constructorul clasei
	  Stack() {
	  	  cout<<"Constructorul clasei apelat!"<<"\n";
          cout<<"Init Stack..."<<"\n";
          //varful stivei
          vas = 0;
	  }

      //destructorul clasei
      	  ~Stack() {
      	  //cout<<add(1,1)<<"\n";
          cout<<"Destructor..."<<"\n";          
	  }


      //2 metode pentru adaugare si scoatere din stiva
	  void push(TYPE value);
	  TYPE pop();

	  private: 
	  TYPE stack[SIZE];
	  int vas;
     
};


template <class TYPE>
void Stack<TYPE>::push(TYPE value) {
 
     if(vas == SIZE) {
     	cout<<"Stiva este plina!";
     	return;
     }

     cout<<"Added to Stack:"<<value<<"\n";
     //stack[0] = value
     stack[ vas ] = value;
     //vas = vas + 1 = 0 + 1 = 1
     vas++;
}

template <class TYPE> 
TYPE Stack<TYPE>::pop() {
     if(vas == 0) {
     	cout<<"Stiva este goala!";
     	return 0;
     }
     vas--;
     return stack[vas];
};


int main(int argc, char const *argv[])
{
	//Stack<TYPE_DATA> name;
	//declaram o stiva de numere intregi	
	Stack<int> stack_int;
	Stack<double> stack_d;
	Stack<float> stack_f;
	Stack<char> stack_char;

	//am declarat 4 stive: prima stiva contine elemente de tip int, double, float, char

	//Stack<float> stack_float;
	//Stack<double> stack_double;

	stack_int.push(9);
	stack_int.push(10);
	stack_int.push(77);
	stack_int.push(-1);
	stack_int.push(-77);

	cout<<"Scoatem din stiva: "<<stack_int.pop()<<"\n";
	cout<<"Scoatem din stiva: "<<stack_int.pop()<<"\n";
	cout<<"Scoatem din stiva: "<<stack_int.pop()<<"\n";
	cout<<"Scoatem din stiva: "<<stack_int.pop()<<"\n";
	cout<<"Scoatem din stiva: "<<stack_int.pop()<<"\n";
	cout<<"Scoatem din stiva: "<<stack_int.pop()<<"\n";



	stack_d.push(9.34);
	stack_d.push(10.55);
	stack_d.push(77.44);
	stack_d.push(-1.4);
	stack_d.push(-77.5);

	cout<<"Scoatem din stiva: "<<stack_d.pop()<<"\n";
	cout<<"Scoatem din stiva: "<<stack_d.pop()<<"\n";
	cout<<"Scoatem din stiva: "<<stack_d.pop()<<"\n";
	cout<<"Scoatem din stiva: "<<stack_d.pop()<<"\n";
	cout<<"Scoatem din stiva: "<<stack_d.pop()<<"\n";
	cout<<"Scoatem din stiva: "<<stack_d.pop()<<"\n";
    
     
      //-77 //stack[4] = -77; varful devine 5
     //-1 stack[3] = -1 ; varful stivei devine 4
     //77 stack[2] = 77; varful stivei se modica la 3
     //10 stack[1] = 10; varful stivei = 2
     //9  stack[0] = 9; varful stivei = 1

	return 0;
}