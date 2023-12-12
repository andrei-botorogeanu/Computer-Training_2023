#
#  class Complex {
#        Complex(parametri) {}
#  }
#
class Complex:
    #constructorul clasei
    def __init__(self, real=0, imag=0):
        self.real = real
        self.imag = imag
    def module(self):
        return sqrt(self.real*self.real + self.imag*self.imag)
    # magic Methods
    #supraincarcarea operatorului +
    def __add__(self, other):
        return Complex(self.real + other.real, self.imag + other.imag)
    #supraincarcarea operatorului -
    def __sub__(self, other):
    #supraincarcarea operatorului *
        return Complex(self.real - other.real, self.imag - other.imag)
    def __mul__(self, other):
        pass
    #supraincarcarea operatorului div /
    def __truediv__(self, other):
        pass
    #supraincarcarea operatorului //
    def __floordiv__(self, other):
        pass
    #supraincarcarea operatorului **
    def __pow__(self, other):
        pass
    # __ 2 underscore
    # pentru reprezentarea obiectului
    def __repr__(self):
        num = str(self.real)
        if self.imag >= 0:
            num += "+"
        num += str(self.imag) + "i"
        return num

def main():
    z1 = Complex(2,-3)
    z2 = Complex(5,8)
    z3 = Complex(7,-9)
    print("Numarul complex z1 =", z1)
    print("Numarul complex z2 =", z2)
    print("Numarul complex z3 =", z3)
    z4 = z1 + z2
    z5 = z1 - z2
    print(z4)
    print(z5)
main()
