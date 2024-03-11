import math
class Complex:
	def __init__(self, real, imag):
		self.real = real
		self.imag = imag
	def module(self):
		return math.sqrt(self.real*self.real+self.imag*self.imag)
	def maxim_ridicare_la_patrat(self, other):
		if self.real*self.real + self.imag*self.imag + 2*self.real*self.imag > other.real*other.real + other.imag*other.imag + 2*other.real*other.imag:
			return 1
		else: return 2	
	def ridicare_la_patrat(self, other):
		real1=self.real*self.real - self.imag*self.imag 
		imag1= 2*self.real*self.imag
		
		real2 = other.real*other.real - other.imag*other.imag 
		imag2 = 2*other.real*other.imag
		print(str(real1), "+", str(imag1) + "i" )
		print(str(real2), "+", str(imag2) + "i" )
	def display(self):
		num = str(self.real)
		if(self.imag > 0):	num += "+"
		num += str(self.imag) + "i"
		print(num)

	def __add__(self, other):
		return Complex(self.real+other.real, self.imag+other.imag)
	def __sub__(self, other):
		return Complex(self.real-other.real, self.imag-other.imag)
	def __mul__(self, other):
		return Complex(self.real*other.real - self.imag*other.imag, self.real*other.imag + self.imag*other.real)
	def __truediv__(self, other):
		return Complex( (self.real*other.real + self.imag*other.imag) / (other.real*other.real + other.real*other.real),
								(other.real*other.imag - self.real*other.imag) / (other.real*other.real + other.real*other.real) )	
	def __repr__(self):
		num = str(self.real)
		if(self.imag > 0):	num += "+"
		num += str(self.imag) + "i"
		return num					 		
'''
(2+3i)^2 si (5+6i)^2
=-5+12i		-11+60i     
'''
def main():
	z1 = Complex(2, 3)# dupa initializare se duce la __init__
	z2 = Complex(5, 6)
	z3 = z1 + z2# se duce la __add__
	#print(z1, end = "---")
	print(z1)
	print(z2)
	print("Suma nr. complexe este: ",z3)
	print("Modulul nr ",z1,"este ",round( z1.module(),3) )
	z5 = z1-z2
	print("Diferenta nr. complexe este: ",z5)
	z6 = z1/z2
	print("Impartirea nr complexe:",z6)
	rounded = format(z1.module() ,".2f")
	print(rounded)
	print(z2.maxim_ridicare_la_patrat(z1) )
#	Aici folosim obiectul z2 care este "self" so z1 se transmite lui other.
#z2 este obiectul care apeleaza metoda
	print("Cele 2 nr complexe la puterea a 2-a sunt:")
	z1.ridicare_la_patrat(z2)
	print()
	z1.display()
main()