#include<iostream>
using namespace std;
class Base {
protected: 
	int x;
	Base(int var) {
		x = var;
		printf("%s\n", "Constructorul clasei de baza este apelat!");
	}
	virtual void function() = 0;
	virtual void euclid()= 0;
	virtual void factorial() = 0;
};
class Derivate: public Base{
private:
	int y;
public:
	Derivate(int first, int second): Base(first) {
		y=second;
		cout<<"Constructorul clasei Derivate este apelat!\n";
	}
	void function()
	{
		printf("x = %d\n", x);
		printf("y = %d\n", y);
	}
	void euclid(){
		int r;
		int copy_x = x, copy_y = y;
		while(copy_y){
			r = copy_x % copy_y;
			copy_x = copy_y;
			copy_y = r;
		}
		printf("Euclid (%d, %d) = %d\n",x , y, copy_x);
	}
	void factorial() {
		int p=1;
		for(int i=1; i<=y; i++) {
			p = p*i;
		}
		printf("Factorial = %d\n", p);
	}
};
int main()
{
	Derivate d(20, 5);
	d.function();
	cout<<"\n";
	d.euclid();
	cout<<"\n";
	d.factorial();

	Base *p = new Derivate(10, 20);
}