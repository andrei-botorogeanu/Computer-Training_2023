#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
public:
    int i, r;
public:
    Complex(int pr, int pi);
    Complex();
    int real();
    int imag();
    friend ostream& operator<<(ostream&, const Complex& );
    Complex operator /(Complex );
    Complex operator *(Complex );   
};

Complex::Complex(int pr, int pi)
{
    r = pr;
    i = pi;    
}
 Complex::Complex()
 {
     r=0; i=0;    
 }

 int Complex :: real()
{
    return r;
}
int Complex :: imag()
{
    return i;
}
 Complex Complex:: operator *(Complex nr )
{
    Complex z3( real()*nr.real()-imag()*nr.imag() , real()*nr.imag() +nr.real()*imag() );
    return z3; 
}

Complex Complex:: operator /(Complex nr )
{
    Complex t;
        float numitor = nr.r* nr.r +nr.i *nr.i;
        if(numitor!=0) {
            //partea reala 
            t.r=( r * nr.r + i*nr.i )/numitor ; 
            //partea imaginara
            t.i=( nr.r*i + r*nr.i )/ numitor ;      
        } else cout<< "Impartirea la zero nu are sens in matematica!";
    return t;
}

ostream& operator << (ostream &stream, const Complex& NC )
{
    stream<<NC.r;
        if(NC.i>0)
            stream<<"+";
        stream<<NC.i<< "i";
    return stream;
}

int main()
{
    Complex Z1(5,6), Z2(4,5);
    int N;
    cin >> N;
    Complex Z3 = Z1/Z2, Z4(1, 0);
    for(int i=1; i<N; i++)
    {
        Z4 = Z4*Z3;
    }
    cout<<Z4;
}