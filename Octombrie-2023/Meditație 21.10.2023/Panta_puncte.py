class Points():
	def __init__(self, abcisa, ordonata):
		self.x = abcisa
		self.y = ordonata
	def arie(self, p2, p3):
		return self.x*(p2.y - p3.y) - self.y*(p2.x-p3.x)+p2.x*p3.y-p3.x*p2.y == 0

def main():
	container = []
	for i in range (3):
		x = float( input() )
		y = float( input() )
		P = Points(x, y)
		container.append(P)
	if container[0].arie( container[1], container[2] ) == True:
		print("Punctele sunt coliniare")
	else: print("Punctele nu sunt coliniare")
main()