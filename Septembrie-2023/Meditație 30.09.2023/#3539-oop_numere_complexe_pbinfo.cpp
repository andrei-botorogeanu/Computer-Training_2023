#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
    // i - partea imaginară, r - partea reală
public:
    int i, r;
public:
    // constructor stabilește valoarea parții reale și a celei imaginare
    Complex(int pr, int pi);
    // constructor creează numarul complex nul
    Complex();
// Avem doi constructori
    // setează valorile părții reale și a celei imaginare
    void set(int, int);
    double modul();
    int real();
    int imag();
// Avem 4 operatori supraîncarcați și 4 metode membre
    //supraîncărcare operator pentru afișarea numărului complex
    friend ostream& operator<<(ostream&, const Complex& );
    Complex operator +(Complex& );
    Complex operator -(Complex );
    Complex operator *(Complex );
};
/*name_class operator rezoluție name_constructor(arg.)
  name_constructor trebuie sa aibă același nume cu clasa
*/

Complex::Complex(int pr, int pi)
{
    r = pr;
    i = pi;    
}
 Complex::Complex()
 {
     r=0; i=0;    
 }
double Complex :: modul()
{
    return sqrt( r*r+i*i );
}
int Complex :: real()
{
    return r;
}
int Complex :: imag()
{
    return i;
}
void Complex :: set(int pr, int pi)
{
    r=pr;
    i=pi;
}
Complex Complex:: operator +(Complex& nr )
{
//    z1=a1+b1*i           z2=a2+b2*i
    Complex z3( real() + nr.real(), imag() +nr.imag() );
    return z3; 
}

Complex Complex:: operator -(Complex nr )
{
    Complex z3( real() - nr.real(), imag() - nr.imag() );
    return z3; 
}

Complex Complex:: operator *(Complex nr )
{
    Complex z3( real()*nr.real()-imag()*nr.imag() , real()*nr.imag() +nr.real()*imag() );
    return z3; 
}

ostream& operator << (ostream &stream, const Complex& NC )
{
    if( NC.r==0 && NC.i==0 )  stream << "0";
    else if( NC.r!=0 && NC.i==0 ) stream << NC.r ;
    else if( NC.i!=0 && NC.r==0 ) stream << NC.i<< "i" ;
    else {  
            stream << NC.r;
         if(NC.i > 0)
            stream<<"+";    
        stream<<NC.i<< "i";
    }
    return stream;
}
int main()
{
    Complex a, b(4,5);
    int x, y;
    cin >> x >> y;
    a.set(x,y);
    cout << a.modul()<<" "<< a*b << " " << a+b << " " << a-b;
    return 0;
}