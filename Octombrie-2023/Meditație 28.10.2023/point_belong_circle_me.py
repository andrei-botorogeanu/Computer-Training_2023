class Point:
	
	def __init__(self, x, y):
		self.x = x
		self.y = y
class Circle:
	def __init__(self, x, y ,r):
		self.O = Point(x, y)
		self.R = float(r) 
	def __repr__(self):
		return "cricle C(" + str(self.O.x) + "," + str(self.O.y) + ") si R= " + str(self.R) 
def sqr(x):
	return x*x
def sqrt(n):
	x = n
	y = 1.0
	EPS = 0.000001
	while x - y > EPS:
		x = ( x + y ) / 2
		y = n / x
	return x
def CalculezDistanta(p1, p):
	return sqrt( sqr(p1.x-p.x) + sqr(p1.y-p.y) ) 
def apartine(Circle, Point):
	if CalculezDistanta(Circle.O, Point) < Circle.R:
		return True
	else: return False

def main():
	n = int(input("Introduceti nr de cercuri: "))
	C = []
	for i in range(1, n+1):
		print( "Circle#%d:" %i)
		x = float( input("x= ") )
		y = float( input("y= ") )
		r = float( input("Radius= ") )
		circle = Circle(x, y, r)
		C.append( circle )
	print("Introduceti  punctul P(x, y)")
	x = float(input("x = "))
	y = float(input("y = "))
	P = Point(x, y)
	for i in range(0 ,n):
		if apartine(C[i], P) is True:
			print("Punctul (%.2f, %.2f) apartine Cercului C(%.2f,%.2f) si R = %f" % (P.x, P.y, C[i].O.x, C[i].O.y, C[i].R ))
main()