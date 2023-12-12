/* Vrem sa adunam o constanta la un nr complex:
de ex: 1+(7+8*i) = 1+0*i+7+8*i = 8+8*i
sau sa adunam un nr complex la o constanta 
de ex: (7+8*i)+1 = 8+8*i 
*/
#include<iostream>
using namespace std;
class Complex {

private:
	double real, imag;
public:
	Complex(){
		imag=0; real=0;
	}
	Complex(double a, double b){
		real = a;
		imag = b;
	}
	Complex(double real){
		this->real = real;
		imag=0;
	}
	void display(){
		cout<< real;
			if(imag>0)	cout<< "+";
			cout<<imag<<"i"<<endl;
	}
	friend Complex operator+(double x, Complex&z);
	friend Complex operator+(Complex&z, double x);
	Complex operator+(const Complex& other){
		Complex results;
		results.real = real + other.real;
		results.imag = imag + other.imag;
		return results;
	}
};
Complex operator+(double x, Complex&z){
	return Complex(x + z.real, z.imag);
}
Complex operator+(Complex&z, double x){
	return Complex(x + z.real, z.imag);
}
int main()
{
	Complex z1(3, -7), z2(5), z3;
	z3 = z1+9;
	z3.display();
}