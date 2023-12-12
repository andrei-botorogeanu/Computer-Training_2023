#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imag;

public:
    Complex(){ real = 0 ; imag = 0; }

    Complex(double r, double i) { real = r; imag = i; }

    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(const Complex& other) {
        return Complex(real - other.real, imag - other.imag);
    }

    Complex operator*(const Complex& other) {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    Complex operator /(Complex &z) {
        Complex t;
        float numitor = z.real * z.real +z.imag *z.imag;
        if(numitor!=0) {
            //partea reala 
            t.real=( real * z.real + imag*z.imag )/numitor ; 
            //partea imaginara
            t.imag=( z.real*imag + real*z.imag )/ numitor ;      
        } else cout<< "Impartirea la zero nu are sens in matematica!";
    return t;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    double real1, imag1, real2, imag2;

    cout << "Introduceti partea reala si partea imaginara pentru primul numar complex: ";
    cin >> real1 >> imag1;

    cout << "Introduceti partea reala si partea imaginara pentru al doilea numar complex: ";
    cin >> real2 >> imag2;

    Complex numar1(real1, imag1);
    Complex numar2(real2, imag2);

    Complex suma = numar1 + numar2;
    Complex diferenta = numar1 - numar2;
    Complex produs = numar1 * numar2;
    Complex impartire = numar1 / numar2;

    cout << "Suma: ";
    suma.display();

    cout << "Diferenta: ";
    diferenta.display();

    cout << "Produs: ";
    produs.display();

    cout << "Impartire: ";
    impartire.display();

    return 0;
}
