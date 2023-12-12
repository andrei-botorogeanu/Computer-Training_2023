#include<iostream>
using namespace std;
class Base {
protected:
int numarator, numitor;
public:
	virtual void read() = 0;
	virtual void display() {
		printf("%d / %d\n ", numarator, numitor);
	}	
	virtual void get_numarator()=0;
	virtual void get_numitor()=0;

};
class Derivate: public Base {
private:
	int numarator, numitor;

public:
	
	Derivate() {}
	void read(){
		scanf("%d %d", &numarator, &numitor);
	}
	void get_numarator(){
		printf("The first numerator: %d\n ", numarator);
	}
	void get_numitor() {
		printf("The first denominator: %d\n ", numitor);
	}
	void display() {
		printf("%d / %d\n ", numarator, numitor);
	}
};
class Derivate2: public Base {
private:
	int numarator, numitor;

public:
	
	Derivate2() {}

	void read(){
		scanf("%d %d", &numarator, &numitor);
	}
	void get_numarator(){
		printf("The second numerator---->>>> %d\n ", numarator);
	}
	void get_numitor() {
		printf("The second denominator---->>>> %d\n ", numitor);
	}	
	void display() {
		printf("%d / %d\n ", numarator, numitor);
	}
};
int main()
{
	Base *d = new Derivate();
	Base *d2 = new Derivate2();
	d->read();
	d->display();
	d->get_numarator();
	d->get_numitor();

	d2->read();
	d2->display();
	d2->get_numarator();
	d2->get_numitor();

}