#include <iostream>

class A {

	int a;

};


class Fractie {

   public:
   	int a, b;
   	

    //constructorul clasei
   	Fractie(int x, int y) {

   			std::cout<<"Constructorul clasei apelat!"<<std::endl;
        a = x;
        b = y;
   	}

    //destructorul clasei
    //~tilda plus numele clasei = destructorul clasei
    ~Fractie() {
    	//code
    	int r = 1;
    	r = r + 1;
        std::cout<<"r = r  + 1="<<r<<std::endl;

    	std::cout<<"S-a apelat destructorul clasei: Obiectul s-a distrus";
    }

};

int main()
{
	Fractie ob1(10,20);//declaram un obiect de tip Fractie si se apeleaza constructorul cu doi parametri.
	//la sfarsit se elibereaza memoria alocata obiectului prin apelul destructorului
}