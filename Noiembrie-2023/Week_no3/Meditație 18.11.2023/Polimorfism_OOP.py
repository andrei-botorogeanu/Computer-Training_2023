class Shape():
	def __init__(self, heigth, width):
		self.heigth = heigth
		self.width = width
	def aria():
		return 0
	def display():
		return 0

class Rectangle( Shape ):
	def __init__(self, heigth, width):
		self.heigth = heigth
		self.width = width
	def aria(self):
		return self.heigth * self.width 
	def display(self):
		print("The Rectangle is equal %.2lf, %.2lf" %(self.heigth, self.width))

class Triangle( Shape ):	
	def __init__(self, base, width):
		self.base = base
		self.width = width
	def aria(self):
		return self.base * self.width / 2
	def display(self):
		print("The Triangle is equal %.2lf, %.2lf" %(self.base, self.width))

class Circle( Shape ):

	def __init__(self, radius):
		self.radius = radius
	def aria(self):
		return 3.14 * self.radius * self.radius
	def display(self):
		print("The Circle is equal %.2lf " %(self.radius))

def main():
	Ob_r = Rectangle(45, 56)
	Ob_t = Triangle(56, 78)
	Ob_c = Circle(78)

	Ob_r.display()
	print("%.2f\n" %Ob_r.aria())
	Ob_t.display()
	print("%.2f\n" %Ob_t.aria())
	Ob_c.display()
	print("%.2f\n" %Ob_c.aria())

main()