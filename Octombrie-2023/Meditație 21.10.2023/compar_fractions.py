class Fraction:
	def __init__(self, numarator, numitor):
		self.numarator=numarator
		self.numitor=numitor
	def __add__(self, other):
		return Fraction(self.numarator*other.numitor+self.numitor*other.numarator, self.numitor*other.numitor)
	def __lt__(self, other):
		print(self.numarator, " ", other.numarator)
		print("- < -", end= " ")
		if self.numarator*other.numitor < self.numitor*other.numarator:
			print( True ) 
		else: 
			print( False )
		print(self.numitor, " ", other.numitor)  
	
	def __gt__(self, other):
		print(self.numarator, " ", other.numarator)
		print("- > -", end=" ")
		if self.numarator*other.numitor > self.numitor*other.numarator:
			print( True )
		else: 
			print( False )
		print(self.numitor, " ", other.numitor)
	
	def __eq__(self, other):
		print(self.numarator, " ", other.numarator)
		print("- = -", end=" ")
		if self.numarator*other.numitor == self.numitor*other.numarator:
			print( True )
		else: 
			print( False )
		print(self.numitor, " ", other.numitor)
	def cmmdc(self, a, b):#este o functie utilitara, nu foloseste datele membre ale clasei, functie auxiliara
		while a!=b:
			if a>b: a=a-b
			else: b=b-a
		return a
	def __repr__(self):
		div_com = self.cmmdc(self.numarator, self.numitor)
		num=str(self.numarator//div_com )
		num+=" / "
		num+=str(self.numitor//div_com )
		return num
def main():
	f1= Fraction(1,2)
	f2= Fraction(3,4)
	f3=f1+f2
	print(f1.numarator," ", f2.numarator)
	print("-   -")
	print(f1.numitor, " ", f2.numitor)
	print(f3)
	print()
	f1<f2
	print()
	f1>f2
	print()
	f1==f2
	'''
	if f1<f2:
		print(True)
	else: print(False)
	if f1==f2:
		print(True)
	else: print( False )
'''
main()