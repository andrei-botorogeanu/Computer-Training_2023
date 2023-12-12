#include<iostream>
using namespace std;

class Complex {
private:
	int real, imag;
public:
	Complex(float real, float imag){
		this->real = real;
		this->imag = imag;
	}
	Complex() {}
	friend istream& operator>>(istream&, Complex&);
	friend ostream& operator<<(ostream&, Complex&);
};
istream& operator>>(istream& stream, Complex& c)
{
	cout<< "Partea reala si partea imaginara: ";
	stream>> c.real>>c.imag;
	return stream;
}
ostream& operator<<(ostream& stream, Complex& d)
{
	stream<<d.real;
	if( d.imag>0 )
		stream<< "+";
	stream<<d.imag<< "i";
	return stream;
}
int main()
{
	Complex z;
	cin>>z;
	cout<<z;

}