class Person():
#datele sunt public
	def __init__(self, name, age, salary):
		self.__name=name
		self.age=age
		self.salary=salary
	def _hello(self, loud = True):
		if loud == True:
			print( "HELLO, %s" %self.name.upper() ) 
		else: print("Hello, %s" %self.name)
def main():
	Obiect1 = Person("Dustin", 20, 2000)
	Obiect1._hello(False)
	print(Obiect1.__name, Obiect1.age, Obiect1.salary)
main()