#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex(){ real=0, imag= 0; }

    Complex(double r, double i){ 
    real= r ; imag = i;
}

    Complex operator+(const Complex& other) {
        Complex result;
        result.real = real + other.real;
        result.imag = imag + other.imag;
        return result;
    }

    void display() {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex num1(3.0, 4.0);
    Complex num2(1.0, 2.0);

    Complex sum = num1 + num2;

    std::cout << "Suma numerelor complexe este: ";
    sum.display();

    return 0;
}