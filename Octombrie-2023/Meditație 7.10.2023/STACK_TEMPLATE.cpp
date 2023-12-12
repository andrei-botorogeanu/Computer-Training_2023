#include<iostream>
#include<cstring>
#define size 10
using namespace std;
template <class Type>
//Stiva noastra propriu_zisa este Cointainer
class Stack {
private:
	int varf_s; 
	Type Container[size];
public:
	Stack()
	{
		cout<< "Se initializeaza stiva: \n";
		varf_s=0;
	}
	~Stack()
	{
		cout<< "Acesta este destructorul"<<"\n" ;
	}
	void push(Type);
	Type pop();
};
// Inainte de a explicita fiecare functie trebuie sa scriem sablonul:
//													template<class Type>
template <class Type>
//			name_class<Type> operator de rezolutie (argumentul metodei)
//			|
	void Stack<Type>::push(Type value)
//	  |
//	este void pt ca doar adauga in container
// La noi Value este de tip Type
{
	if(varf_s==size) {
		cout<<"Stiva este plina"<< "\n";
		return ;
	}
	else {
		cout<< "Add to stack value: " << value<< "\n";
	}
	Container[varf_s] = value;
	varf_s++;
}
template <class Type>
//	Pt ca intoarce o valoare de tip Type
//   |
	Type Stack<Type>::pop()
{
	if(varf_s == 0){	cout<< "Stiva este goala ";
		return 0;
	}
	varf_s--;
		cout<< " Scot din stiva cointainer"<<Container[varf_s]<< "\n";
	
	return Container[varf_s]; 
}
int main()
{
	Stack<int> stack_int;
	Stack<double> stack_d;
	Stack<string> stack_s;
	stack_int.push(56);
	stack_int.push(78);

	stack_d.push(45.78);
	stack_d.push(23.78);

	stack_s.push("ANDREI");
	stack_s.push("ANA");

	stack_int.pop();
	stack_int.pop();
	stack_int.pop();

	cout<<stack_d.pop();
	cout<<stack_d.pop();
	cout<<stack_d.pop();

	cout<<stack_s.pop();
	cout<<stack_s.pop();
	cout<<stack_s.pop();
}